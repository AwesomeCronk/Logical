import os, logging

from logic.core import element, pin
from logic.elements import *
from ui import *
from loading.parsing import parseCommands
from errors import LoadError, throw

# Load a truth table from parsed .lgc source code
def loadTable(filePath, id=0):
    log = logging.getLogger('loadTable')
    log.info('Loading as truth table...')
    with open(filePath, 'r') as file:
        commands = parseCommands(file.read().split('\n'))
    table = truthTable()
    readingTable = False

    for ctr, comm in enumerate(commands):
        log.debug('\n' + comm.info().replace('self.', ''))
        if comm.element == '$pins':
            for i in comm.inputs:
                table.addInput(pin(i))
            for o in comm.outputs:
                table.addOutput(pin(o))
        
        elif comm.element == 'match':
            break
    
    table.setupTable()

    for comm in commands[ctr:]:
        log.debug('\n'.join([('    ' if i > 0 else '') + line for i, line in enumerate(comm.info().replace('self.', '').split('\n'))]))
        if comm.element == '$pins':
            throw(LoadError('Cannot add pins after matches have been declared.', id, filePath, comm.line))
            
        elif comm.element == 'match':
            try:
                for i in comm.inputs:
                    assert int(i) in [0, 1]
                for o in comm.inputs:
                    assert int(o) in [0, 1]
            except:
                throw(LoadError('Truth table matches must be 0 or 1.', id, filePath, comm.line))

            if len(comm.inputs) != len(table.inputs):
                throw(LoadError('Input length mismatch.', id, filePath, comm.line))

            elif len(comm.outputs) != len(table.outputs):
                throw(LoadError('Output length mismatch.', id, filePath, comm.line))
            
            else:
                match = int('0b' + ''.join([i for i in comm.inputs]), base=2)
                result = ''.join([o for o in comm.outputs])
                log.debug('Adding match for {} and {}'.format(match, result))
                table.addMatch(match, result)

        else:
            throw(LoadError('Command {} not recognized.'.format(comm.text), id, filePath, comm.line))

    table.setID(id)

    log.info('Truth table loaded.')
    return table, None  # No widget for truth tables

# Load an element from Python source
def loadPyElement(filePath, args=[], id=0):
    log = logging.getLogger('loadPyElement')
    log.info('Loading as Python element...')

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
        throw(LoadError('Python file contained no class named "pyElement".', id, filePath))

    pyElement.setID(id)
    log.info('Python element loaded.')
    return pyElement, pyWidget

# Load an element from parsed .ttb source and return that element
def loadElement(filePath, cwd=None, args=[], id=0):
    log = logging.getLogger('loadElement')
    log.info('Loading element...')
    log.debug('old filePath: {}'.format(filePath))
    log.debug('old cwd: {}'.format(cwd))

    # Some shenanigans to get the paths right
    if cwd is None:
        filePath = os.path.abspath(filePath)
    else:
        filePath = os.path.join(cwd, filePath)
    cwd = os.path.split(filePath)[0]
    log.debug('new filePath: {}'.format(filePath))
    log.debug('new cwd: {}'.format(cwd))

    if filePath.split('.')[-1] == 'ttb':    # Load as truth table if .ttb file
        return loadTable(filePath, id=id)
    elif filePath.split('.')[-1] == 'py':   # Load as Python element if .py file
        return loadPyElement(filePath, args = args, id=id)

    with open(filePath, 'r') as file:
        commands = parseCommands(file.read().split('\n'))

    # Variables for loading things
    needsConnected = {}
    registeredElements = {} # Sort by name: filepath
    keyBinds = {}

    # Main element setup
    mainElement = element()
    mainElement.setID(id)

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
        id += 1
        performIOChecks = True
        log.debug('\n'.join([('    ' if i > 0 else '') + line for i, line in enumerate(comm.info().replace('self.', '').split('\n'))]))
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
            newElement.setID(id)
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'or':
            newElement = orGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            newElement.setID(id)
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'xor':
            newElement = xorGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            newElement.setID(id)
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'not':
            newElement = notGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            newElement.setID(id)
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'nand':
            newElement = nandGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            newElement.setID(id)
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'nor':
            newElement = norGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            newElement.setID(id)
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'xnor':
            newElement = xnorGate()
            newElement.outputs['y'].realias(comm.outputs[0])
            newElement.setID(id)
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'tristate':
            newElement = tristate()
            newElement.outputs['y'].realias(comm.outputs[0])
            newElement.setID(id)
            mainElement.addElement(newElement)
            needsConnected.update({newElement: comm.inputs})

        # UI elements
        elif comm.element == 'led':
            newElement = led(*comm.args)
            newElement.setID(id)
            mainElement.addElement(newElement)
            mainWidget.addWidget(newElement.widget)
            needsConnected.update({newElement: comm.inputs})

        elif comm.element == 'label':
            newElement = label(*comm.args)
            newElement.setID(id)
            mainElement.addElement(newElement)
            mainWidget.addWidget(newElement.widget)
            needsConnected.update({newElement: comm.inputs})

        # Control elements
        elif comm.element == 'button':
            newElement = button(*comm.args)
            newElement.outputs['y'].realias(comm.outputs[0])
            newElement.setID(id)
            mainElement.addElement(newElement)
            mainElement.addKeyBinds(newElement.keyBinds)
        
        elif comm.element == 'switch':
            newElement = switch(*comm.args)
            newElement.outputs['y'].realias(comm.outputs[0])
            newElement.setID(id)
            mainElement.addElement(newElement)
            mainElement.addKeyBinds(newElement.keyBinds)

        elif comm.element in registeredElements.keys():
            newElement, newWidget = loadElement(registeredElements[comm.element], cwd = cwd, args = comm.args, id=id)
            
            log.debug(newElement.inputs)
            log.debug(newElement.outputs)

            # Rename the outputs to the names specified in the .lgc script
            names = list(newElement.outputs.keys())
            for n, name in enumerate(names):
                newElement.outputs[name].realias(comm.outputs[n])
                
            mainElement.addElement(newElement)  # Add newElement to mainElement
            if not newWidget is None:
                mainWidget.addWidget(newWidget)     # Add newWidget to mainWidget
            
            # Add inputs to needsConnected
            
            pins = []
            for i in range(len(newElement.inputs)):
                log.debug(i)
                pins.append(comm.inputs[i])
            needsConnected.update({newElement: pins})

            mainElement.addKeyBinds(newElement.keyBinds)

        else:
            throw(LoadError('Command {} not recognized.'.format(comm.text), id, filePath, comm.line))
            
        # Input/output checks
        # Should be skipped if the command being run is $include or $pins
        if performIOChecks:
            if len(newElement.inputs) != len(comm.inputs):
                throw(LoadError('Invalid number of inputs: {}'.format(len(comm.inputs)), id, filePath, comm.line))
            if len(newElement.outputs) != len(comm.outputs):
                throw(LoadError('Invalid number of outputs: {}'.format(len(comm.outputs)), id, filePath, comm.line))
            # if len(newElement.args) != len(comm.args):
            #     raise Exception('Invalid number of args: {}'.format(len(comm.args)))

    log.info('Element {} has subelements {}'.format(mainElement.id, ', '.join([str(e.id) for e in mainElement.elements])))

    # needsConnected is a dict of {element: targetAliases} or {pin: targetAlias}
    log.debug('Establishing connections.')
    for e in needsConnected.keys():
        # debug('', debugLevel)
        log.debug('connecting element {} inputs to {} in of element {}'.format(e.id if isinstance(e, element) else e.elementID, needsConnected[e], mainElement.id))
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

    log.info('Element loaded.')
    return mainElement, mainWidget
