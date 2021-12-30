# https://newbedev.com/how-to-key-press-detection-on-a-linux-terminal-low-level-style-in-python
import sys, io, timeit, threading
from contextlib import contextmanager

if sys.platform == 'linux':
    import termios, tty
elif sys.platform == 'win32':
    import msvcrt
    # sys.stdin = io.TextIOWrapper(open(sys.stdin.fileno(), 'rb', 0), write_through=True)

debugEnabled = False

def setKeyDebug(state):
    global debugEnabled
    debugEnabled = state

def debug(*args, **kwargs):
    if debugEnabled:
        print(*args, **kwargs)

# Unfortunately the blocking nature of sys.stdin.read means that a key must
# be sent after Ctrl+C sometimes. This is because the main thread often does
# not quit before the IO thread loops back.

def getCharLinux():
    try:
        debug('setting terminal mode')
        fd = sys.stdin.fileno()
        attr = termios.tcgetattr(fd)
        tty.setraw(fd)
        debug('set terminal mode')
        return repr(sys.stdin.read(1))[1:-1]
    finally:
        debug('resetting terminal mode')
        termios.tcsetattr(fd, termios.TCSANOW, attr)

def getCharWindows():
    return repr(msvcrt.getch())[2:-1]

getCharPlatform = {'linux': getCharLinux, 'win32': getCharWindows}

getChar = getCharPlatform[sys.platform]

getTime = timeit.default_timer


holdTimeThreshold = 0.6     # Time in seconds since last call to consider key as held

class keyEvent():
    def __init__(self, keyValue, function, simulation):
        self.keyValue = keyValue
        self.function = function
        self.simulation = simulation

        self.called = False
        self.timeLastCalled = 0.0

    def getTimeDiff(self):
        timeJustCalled = getTime()
        timeDiff = timeJustCalled - self.timeLastCalled
        # debug(timeJustCalled, self.timeLastCalled, timeDiff)
        return timeJustCalled, timeDiff

    def call(self):
        timeJustCalled, timeDiff = self.getTimeDiff()
        if timeDiff > holdTimeThreshold and not self.called:
            self.simulation.eventsToCall.append((self.function, True))
        self.called = True
        self.timeLastCalled = timeJustCalled

    def unCall(self):
        if self.called:
            debug('uncalling')
            timeDiff = self.getTimeDiff()[1]
            if timeDiff > holdTimeThreshold:
                self.simulation.eventsToCall.append((self.function, False))
                self.called = False
            # else:
            #     debug('unCall skipped, timeDiff={}'.format(timeDiff))


def createKeyEvent(keyValue, function, simulation):     # Create event that calls <function> when <keyEvent> is found in stdin
    newKeyEvent = keyEvent(keyValue, function, simulation)
    if keyValue in simulation.keyEvents.keys():
        if not function in simulation.keyEvents[keyValue]:
            simulation.keyEvents[keyValue].append(newKeyEvent)
    else:
        simulation.keyEvents[keyValue] = [newKeyEvent]
    debug('key event created for {}'.format(keyValue))

@contextmanager
def pollKeyEvents(simulation):
    try:
        poller = threading.Thread(
            target=__pollKeyEvents,
            name='pollKeyEvents',
            args=(simulation,)
        )
        poller.start()
        debug('poller started')
        yield
    finally:
        poller.join()
        debug('poller joined')

def __pollKeyEvents(simulation):    # Get and call key events
    while simulation.runFlag:
        char = getChar()
        try:
            currentEvents = simulation.keyEvents[char]
            for currentEvent in currentEvents:
                currentEvent.call()
            debug('called event')

        except KeyError:    # Event not registered
            debug('no event found')
            pass


def rawTest():
    oldTime = getTime()
    while True:
        c = getChar()
        newTime = getTime()
        print(c, end=' ')
        # print(int.from_bytes(c.encode('utf-8'), 'big'), end=' ')
        print(newTime - oldTime, end=' ')
        if c == '\\x03':
            print('Ctrl+C')
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

            createKeyEvent('\\x03', self.stop, self)
            createKeyEvent('1', self.eventTest, self)
            createKeyEvent('2', self.eventTest2, self)

        def eventTest(self, value):
            print('event test 1 {}'.format(value))

        def eventTest2(self, value):
            print('event test 2 {}'.format(value))

        def stop(self, value):
            print('sim.stop called')
            self.runFlag = False

        def main(self):
            print('sim.main called')
            with pollKeyEvents(self):
                while self.runFlag:
                    for currentEvent in simulation.keyEvents.values():
                        #if currentEvent.called:
                        currentEvent.unCall()
                        #print('uncalled event')
                    for func, par in self.eventsToCall:
                        func(par)
                        del(self.eventsToCall[0])
                        # print('ran function')
                    # Where other stuff will go
                print('sim.main loop broke')
            print('sim.main context manager exited')
    print('sim defined')
    Sim = sim()
    Sim.main()
    print('sim.main ran')


if __name__ == '__main__':
    if '--raw' in sys.argv:
        rawTest()
    else:
        eventTest()
