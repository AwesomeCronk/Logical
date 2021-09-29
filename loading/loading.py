import os
from logic.core import element, pin
from logic.elements import *
from ui import *
from loading.parsing import parseCommands
# import pdb

def debug(text, level, end='\n'):
    lines = str(text).split('\n')
    for line in lines[:-1]:
        print('  ' * level + line)
    print('  ' * level + lines[-1], end=end)

# Load a truth table from parsed .lgc source code
def loadTable(filePath, debugLevel=0):
    debug('Loading as truth table...', debugLevel)
    with open(filePath, 'r') as file:
        commands = parseCommands(file.read().split('\n'))
    table = truthTable()
    readingTable = False

    for ctr, comm in enumerate(commands):
        debug('\n' + comm.info().replace('self.', ''), debugLevel)
        if comm.element == '$pins':
            for i in comm.inputs:
                table.addInput(pin(i))
            for o in comm.outputs:
                table.addOutput(pin(o))
        
        elif comm.element == 'match':
            break
    
    table.setupTable()

    for comm in commands[ctr:]:
        debug('\n' + comm.info().replace('self.', ''), debugLevel)
        if comm.element == '$pins':
            raise Exception('Cannot add pins after matches have been declared.')
            
        elif comm.element == 'match':
            try:
                for i in comm.inputs:
                    assert int(i) in [0, 1]
                for o in comm.inputs:
                    assert int(o) in [0, 1]
            except:
                raise Exception('Truth table matches must be 0 or 1.')

            if len(comm.inputs) != len(table.inputs):
                raise Exception('Input length mismatch.')

            elif len(comm.outputs) != len(table.outputs):
                raise Exception('Output length mismatch.')
            
            else:
                match = int('0b' + ''.join([i for i in comm.inputs]), base=2)
                result = ''.join([o for o in comm.outputs])
                debug('Adding match for {} and {}'.format(match, result), debugLevel)
                table.addMatch(match, result)

        else:
            raise Exception('Command {} not recognized.'.format(comm.text))

    debug('Truth table loaded.', debugLevel, end = '\n\n')
    return table, None  # No widget for truth tables

# Load an element from Python source
def loadPyElement(filePath, args=[], debugLevel=0):
    debug('Loading as Python element...', debugLevel)

    globalVars = {
        'element': element,
        'pin': pin,
        'widget': widget,
        'vec2': vec2
    }
    localVars = {}
    with open(filePath, 'r') as file:
        exec(compile(file.read(), filePath, 'exec'), globalVars, localVars)
    
    if 'pyElement' in localVars.keys():
        pyElement = localVars['pyElement']
        pyElement = pyElement(*args)
        try:
            pyWidget = pyElement.widget
        except AttributeError:
            pyWidget = None
    else:
        raise Exception('Python file contained no class named "pyElement".')

    debug('Python element loaded.', debugLevel, end = '\n\n')
    return pyElement, pyWidget

# Load an element from parsed .ttb source and return that element
def loadElement(filePath, cwd=None, args=[], debugLevel=0):
    # Some shenanigans to get the paths right
    debug('Loading element...\nold filePath: {}\nold cwd: {}'.format(filePath, cwd), debugLevel)
    if cwd is None:
        filePath = os.path.abspath(filePath)
    else:
        filePath = os.path.join(cwd, filePath)
    cwd = os.path.split(filePath)[0]
    #debug('=====loading element from {}====='.format(filePath), debugLevel)
    debug('new filePath: {}\nnew cwd: {}\n'.format(filePath, cwd), debugLevel)

    if filePath.split('.')[-1] == 'ttb':    # Load as truth table if .ttb file
        return loadTable(filePath, debugLevel=debugLevel)
    elif filePath.split('.')[-1] == 'py':   # Load as Python element if .py file
        return loadPyElement(filePath, args = args, debugLevel=debugLevel)

    with open(filePath, 'r') as file:
        commands = parseCommands(file.read().split('\n'))

    # Variables for loading things
    needsConnected = {}
    registeredElements = {} # Sort by name: filepath
    busses = {}
    keyBinds = {}

    # Main element setup
    mainElement = element()

    highPin = pin('\\high')
    mainElement.internalPins.update({highPin.name: [highPin]})
    mainElement.aliasInternalPins.update({highPin.alias: [highPin]})
    mainElement.internalPins['\\high'][0].set(1)

    lowPin = pin('\\low')
    mainElement.internalPins.update({lowPin.name: [lowPin]})
    mainElement.aliasInternalPins.update({lowPin.alias: [lowPin]})
    mainElement.internalPins['\\low'][0].set(0)

    # Main widget setup
    mainWidget = widget()
    mainWidget.setMode(widget.containerMode)

    for comm in commands:
        performIOChecks = True
        debug('\n' + comm.info().replace('self.', ''), debugLevel, )
        # Element config
        if comm.element == '$include':
            # Add a note of where to find this element that has been included
            registeredElements.update({comm.outputs[0]: comm.inputs[0].replace('/','\\')})
            performIOChecks = False
        
        elif comm.element == '$pins':
            for i in comm.inputs:
                mainElement.addInput(pin(i))
            for o in comm.outputs:
                newPin = pin(o)
                needsConnected.update({newPin: o})
                mainElement.addOutput(newPin)
            performIOChecks = False

        # Basic gates
        elif comm.element == 'and':
            newElement = andGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'or':
            newElement = orGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'xor':
            newElement = xorGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'not':
            newElement = notGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'nand':
            newElement = nandGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'nor':
            newElement = norGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'xnor':
            newElement = xnorGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'tristate':
            newElement = tristate()
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        # UI elements
        elif comm.element == 'led':
            newElement = led(*comm.args)
            mainElement.addElement(newElement)
            mainWidget.addWidget(newElement.widget)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'label':
            newElement = label(*comm.args)
            mainElement.addElement(newElement)
            mainWidget.addWidget(newElement.widget)
            needsConnected.update({newElement: comm.inputs})

        # Control elements
        elif comm.element == 'button':
            newElement = button(*comm.args)
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            mainElement.addKeyBinds(newElement.keyBinds)
        
        elif comm.element == 'switch':
            newElement = switch(*comm.args)
            newElement.outputs['y'].realias(comm.outputs[0])
            mainElement.addElement(newElement)
            mainElement.addKeyBinds(newElement.keyBinds)

        elif comm.element in registeredElements.keys():
            newElement, newWidget = loadElement(registeredElements[comm.element], cwd = cwd, args = comm.args, debugLevel=debugLevel + 1)
            
            debug(newElement.inputs, debugLevel)
            debug(newElement.outputs, debugLevel)
            # Rename the outputs to the names specified in the .lgc script
            commandOffset = 0
            oldNames = list(newElement.outputs.keys())
            for o in oldNames:
                newElement.outputs[o].realias(comm.outputs[commandOffset])
                commandOffset += 1
                
            mainElement.addElement(newElement)  # Add newElement to mainElement
            if not newWidget is None:
                mainWidget.addWidget(newWidget)     # Add newWidget to mainWidget
            
            # Add inputs to needsConnected
            
            pins = []
            for i in range(len(newElement.inputs)):
                debug(i, debugLevel)
                pins.append(comm.inputs[i])
            needsConnected.update({newElement: pins})

            mainElement.addKeyBinds(newElement.keyBinds)

        else:
            raise Exception('Command {} not recognized.'.format(comm.text))
            
        # Input/output checks
        # Should be skipped if the command being run is $include or $pins
        if performIOChecks:
            if len(newElement.inputs) != len(comm.inputs):
                raise Exception('Invalid number of inputs: {}'.format(len(comm.inputs)))
            if len(newElement.outputs) != len(comm.outputs):
                raise Exception('Invalid number of outputs: {}'.format(len(comm.outputs)))
            # if len(newElement.args) != len(comm.args):
            #     raise Exception('Invalid number of args: {}'.format(len(comm.args)))

    # needsConnected is a dict of {element: targetAliases} or {pin: targetAlias}
    debug('\nEstablishing connections.', debugLevel)
    for e in needsConnected.keys():
        # debug('', debugLevel)
        debug('connecting {} to {}'.format(e, needsConnected[e]), debugLevel)
        if isinstance(e, pin):
            targetName = needsConnected[e]
            targetPins = mainElement.aliasInternalPins[targetName]
            for targetPin in targetPins:
                e.connect(targetPin)
        else:
            targetNames = needsConnected[e]
            # debug(targetNames, debugLevel)
            for i, inputPin in enumerate(e.inputs.values()):
                # debug('i: {} inputPin: {}'.format(i, inputPin), debugLevel)
                targetPins = mainElement.aliasInternalPins[targetNames[i]]
                for targetPin in targetPins:
                    # debug('connected pin', debugLevel)
                    inputPin.connect(targetPin)

    debug('Element loaded.', debugLevel, end = '\n\n')
    return mainElement, mainWidget
