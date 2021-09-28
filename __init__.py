import sys, inspect, time
depth = 0

def callMapTrace(frame, event, arg):
    eventTime = time.process_time_ns() // 1000
    global depth

    def log():
        print('{}us - {}{}'.format(eventTime, '  ' * depth, msg))

    if event == 'call':
        depth += 1
        msg = 'function {} called'.format(inspect.stack()[1].function)
        log()
    elif event == 'line':
        msg = 'executing line {}'.format(inspect.stack()[1].lineno)
        log()
    elif event == 'return':
        msg = 'function {} returned {}'.format(inspect.stack()[1].function, arg)
        log()
        depth -= 1
    elif event == 'exception':
        msg = 'exception raised!!!!'
        log()
    elif event == 'opcode':
        msg = 'executing opcode'
        log()

    return callMap

if __name__ == '__main__':
    # Test
    def func0(arg):
        print('func0 arg: {}'.format(arg))
        func1()
    def func1():
        print('func1')

    sys.settrace(callMapTrace)
    print('testing...')
    var = 2
    func0(var)
