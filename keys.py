# https://newbedev.com/how-to-key-press-detection-on-a-linux-terminal-low-level-style-in-python
import sys, tty, termios, timeit, threading
from contextlib import contextmanager

def getCharLinux():
    try:
        print('setting terminal mode')
        fd = sys.stdin.fileno()
        attr = termios.tcgetattr(fd)
        tty.setraw(fd)
        return sys.stdin.read(1)
    finally:
        print('resetting terminal mode')
        termios.tcsetattr(fd, termios.TCSANOW, attr)

def getCharWindows():
    pass

getCharPlatform = {'linux': getCharLinux, 'win32': getCharWindows}

def getChar():
    return getCharPlatform[sys.platform]()

getTime = timeit.default_timer


holdTimeThreshold = 0.6     # Time in seconds since last call to consider key as held

keyEvents = {}

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
        # print(timeJustCalled, self.timeLastCalled, timeDiff)
        return timeJustCalled, timeDiff

    def call(self):
        timeJustCalled, timeDiff = self.getTimeDiff()
        if timeDiff > holdTimeThreshold and not self.called:
            self.simulation.eventsToCall.append((self.function, True))
        self.called = True
        self.timeLastCalled = timeJustCalled

    def unCall(self):
        if self.called:
            print('uncalling')
            timeDiff = self.getTimeDiff()[1]
            if timeDiff > holdTimeThreshold:
                self.simulation.eventsToCall.append((self.function, False))
                self.called = False
            else:
                print('unCall skipped, timeDiff={}'.format(timeDiff))


def createKeyEvent(keyValue, function, simulation):     # Create event that calls <function> when <keyEvent> is found in stdin
    keyEvents[keyValue] = keyEvent(keyValue, function, simulation)
    print('key event created')

@contextmanager
def pollKeyEvents(simulation):
    try:
        poller = threading.Thread(
            target=__pollKeyEvents,
            name='pollKeyEvents',
            args=(simulation,)
        )
        poller.start()
        print('poller started')
        yield
    finally:
        poller.join()
        print('poller joined')

def __pollKeyEvents(simulation):    # Get and call key events
    while simulation.runFlag:
        char = getChar()
        try:
            currentEvent = keyEvents[repr(char)]
            currentEvent.call()
            print('called event')

        except KeyError:    # Event not registered
            print('no event found')


def rawTest():
    # # 01 - 1a are Ctrl+A - Ctrl+Z
    # Esc = '\x1b'
    # Bks = '\x7f'
    # Ins = Esc, '[', '2', '~'
    # Del = Esc, '[', '3', '~'
    # ArrUp = Esc, '[', 'A'
    # ArrDn = Esc, '[', 'B'
    # ArrRt = Esc, '[', 'C'
    # ArrLt = Esc, '[', 'D'
    # # = Esc, '[', 'E'
    # Home = Esc, '[', 'H'
    # End = Esc, '[', 'F'
    # PgUp = Esc, '[', '5', '~'
    # PgDn = Esc, '[', '6', '~'

    oldTime = getTime()
    while True:
        c = getChar()
        newTime = getTime()
        print(repr(c), int.from_bytes(c.encode('utf-8'), 'big'), newTime - oldTime, end=' ')
        if c == '\x03':
            print('Ctrl+C')
            break
        else:
            print('')
        oldTime = newTime

def eventTest():
    class sim():
        def __init__(self):
            self.runFlag = True
            self.eventsToCall = []

            createKeyEvent("'\\x03'", self.stop, self)
            createKeyEvent("'t'", self.eventTest, self)

        def eventTest(self, value):
            print('event test {}'.format(value))

        def stop(self, value):
            print('sim.stop called')
            self.runFlag = False

        def main(self):
            print('sim.main called')
            with pollKeyEvents(self):
                while self.runFlag:
                    for currentEvent in keyEvents.values():
                        #if currentEvent.called:
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
    if '--raw' in sys.argv:
        rawTest()
    else:
        eventTest()
