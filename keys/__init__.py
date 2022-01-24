# https://newbedev.com/how-to-key-press-detection-on-a-linux-terminal-low-level-style-in-python
import sys, os, timeit, threading, logging
from contextlib import contextmanager

if sys.platform == 'linux':
    import termios, tty
elif sys.platform == 'win32':
    import msvcrt
    # sys.stdin = io.TextIOWrapper(open(sys.stdin.fileno(), 'rb', 0), write_through=True)

keyMap = {}

# Set keyMap for cross-platform and terminal specialness compatibility
# if keyMapName is 'linux' or 'win32' use the builtins, otherwise open as a file
def setKeyMap(keyMapName):
    global keyMap
    log = logging.getLogger('setKeyMap')

    if keyMapName in ('linux', 'win32'):
        keyMapPath = os.path.join(os.path.dirname(__file__), '{}.km'.format(keyMapName))
    else:
        keyMapPath = keyMapName

    keyMap = {}
    with open(keyMapPath, 'r') as keyMapFile:
        for keyMapLine in keyMapFile:   # Iterate through each line
            try:
                keyMapList = keyMapLine[:-1].split()
                char = bytes.fromhex(keyMapList[0][2:])
                keyName = keyMapList[1]

            except IndexError:  # Couldn't get the necessary data from the file
                continue    # Just move on

            # Put the key name in the dict addressed by that byte
            if not char in keyMap.keys():
                keyMap[char] = []
            keyMap[char].append(keyName)
    log.info('keyMap set to {}'.format(keyMapName))
    
def printKeyMap():
    for key in keyMap.keys():
        print(str(key).ljust(10), keyMap[key])

# Unfortunately the blocking nature of sys.stdin.read means that a key
# must often be sent after Ctrl+C. This is because the main thread does
# not quit before the IO thread loops back.

def __getCharLinux():
    log = logging.getLogger('getChar')
    try:
        log.debug('setting terminal mode')
        fd = sys.stdin.fileno()
        attr = termios.tcgetattr(fd)
        tty.setraw(fd)
        log.debug('set terminal mode')
        return sys.stdin.read(1).encode()
    finally:
        log.debug('resetting terminal mode')
        termios.tcsetattr(fd, termios.TCSANOW, attr)

def __getCharWin32():
    return msvcrt.getch()

getChar = {'linux': __getCharLinux, 'win32': __getCharWin32}[sys.platform]

keyBuffer = []

def getKey():
    global keyBuffer
    
    def sendFirstFromBuffer():
        key, rawChar = keyBuffer[0]
        del keyBuffer[0]
        return key, rawChar

    # Some rawChars match two keys
    # Only read stdin if there aren't extras to send
    if len(keyBuffer) == 0:
        rawChar = getChar()
        if rawChar in keyMap.keys():
            keys = keyMap[rawChar]
        else:
            keys = ['<Unknown>']
        for key in keys:
            keyBuffer.append((key, rawChar))
    
    return sendFirstFromBuffer()

getTime = timeit.default_timer

class keyEvent():
    def __init__(self, keyValue, function, delay, simulation):
        self.keyValue = keyValue
        self.function = function
        self.delay = delay
        self.simulation = simulation

        self.called = False
        self.timeCalled = 0.0

    def getTimeDiff(self):
        timeJustCalled = getTime()
        timeDiff = timeJustCalled - self.timeCalled
        return timeJustCalled, timeDiff

    def call(self):
        timeJustCalled, timeDiff = self.getTimeDiff()
        if timeDiff > self.delay and not self.called:
            self.simulation.eventsToCall.append((self.function, True))
            self.called = True
            self.timeCalled = timeJustCalled

    def unCall(self):
        if self.called:
            timeDiff = self.getTimeDiff()[1]
            if timeDiff > self.delay:
                self.simulation.eventsToCall.append((self.function, False))
                self.called = False


def createKeyEvent(keyValue, function, delay, simulation):     # Create event that calls <function> when <keyEvent> is found in stdin
    log = logging.getLogger('createKeyEvent')
    newKeyEvent = keyEvent(keyValue, function, delay, simulation)
    if keyValue in simulation.keyEvents.keys():
        if not function in simulation.keyEvents[keyValue]:
            simulation.keyEvents[keyValue].append(newKeyEvent)
    else:
        simulation.keyEvents[keyValue] = [newKeyEvent]
    log.info('key event created for {}'.format(keyValue))

@contextmanager
def pollKeyEvents(simulation):
    log = logging.getLogger('pollKeyEvents')
    try:
        poller = threading.Thread(
            target=__pollKeyEvents,
            name='pollKeyEvents',
            args=(simulation,)
        )
        poller.start()
        log.info('poller started')
        yield
    finally:
        poller.join()
        log.info('poller joined')

def __pollKeyEvents(simulation):    # Get and call key events
    log = logging.getLogger('pollKeyEvents')
    while simulation.runFlag:
        key, rawChar = getKey()
        try:
            currentEvents = simulation.keyEvents[key]
            for currentEvent in currentEvents:
                currentEvent.call()
            log.debug('called event')

        except KeyError:    # Event not registered
            log.debug('no event found')
            pass


def rawTest():
    oldTime = getTime()
    while True:
        key, rawChar = getKey()
        newTime = getTime()
        print('0x' + hex(int.from_bytes(rawChar, 'big'))[2:].zfill(2),  end='  ')
        print(key.ljust(15), end=' ')
        print(str(newTime - oldTime).ljust(23), end=' ')
        if rawChar == b'\x03':
            print('raw Ctrl+C')
            break
        else:
            print('')
        oldTime = newTime

def eventTest():
    class sim():
        def __init__(self):
            self.runFlag = True
            self.keyEvents = {}
            self.eventsToCall = []

            createKeyEvent('Ctrl+C', self.stop, 0.3, self)
            createKeyEvent('1', self.eventTest, 0.3, self)
            createKeyEvent('2', self.eventTest2, 0.3, self)

        def eventTest(self, value):
            print('event test 1 {}'.format(value))

        def eventTest2(self, value):
            print('event test 2 {}'.format(value))

        def stop(self, value):
            print('sim.stop called')
            self.runFlag = False

        def main(self):
            print('sim.main called')
            print(self.keyEvents)
            with pollKeyEvents(self):
                while self.runFlag:
                    for currentEvents in self.keyEvents.values():
                        for currentEvent in currentEvents:
                            currentEvent.unCall()   
                        #print('uncalled event')
                    for func, par in self.eventsToCall:
                        func(par)
                        del(self.eventsToCall[0])
                        print('ran function')
                    # Where other stuff will go
                print('sim.main loop broke')
            print('sim.main context manager exited')
    print('sim defined')
    Sim = sim()
    Sim.main()
    print('sim.main ran')


if __name__ == '__main__':
    setKeyMap(sys.platform)
    if '--raw' in sys.argv:
        rawTest()
    elif '--map' in sys.argv:
        setKeyMap(sys.platform)
    else:
        eventTest()
