commentSequence = '//'
includeSequence = '$include'
entrySeparatorSequence = ';'
argumentSequence = '&'
pinSeparatorSequence = '>'

lineNumberOffset = 1
entryNumberOffset = 1

class ParseError(Exception):
    pass

# Class to represent commands in .lgc or .ttb source
class command():
    def __init__(
        self, line, entry, text,
        element, inputs, outputs, args
    ):      # This line needs to cheer up...

        self.line = line        # Line number
        self.entry = entry      # Entry number
        self.text = text        # Entry source code
        self.element = element
        self.inputs = inputs
        self.outputs = outputs
        self.args = args        # Arguments supplied after argumentSequence
        
    def __repr__(self):
        return "command '{}' on line {}".format(self.text, self.line)

# Function to parse .lgc and .ttb source code and return a list of commands.
def parseCommands(lines):
    commands = []
    for l in range(len(lines)):
        line = lines[l].split(commentSequence)[0]       # Take out comments
        entries = line.split(entrySeparatorSequence)    # Get individual entries
        
        for e in range(len(entries)):
            entry = entries[e]      # Iterate through each entry on the line
            element = entry.split(' ')[0]
            other = ' '.join(entry.split(' ')[1:])
            
            # Split at the argument separator and subsequently at spaces
            if other.count(argumentSequence) > 1:
                raise ParseError('only one instance of "{}" per entry allowed.'.format(argumentSequence))
            
            if other.count(argumentSequence) == 1:
                other, args = other.split(argumentSequence)
                args = args.split()

            else:
                args = []
            
            # Split at the pin separator and subsequently at spaces
            # inputs and outputs should both be lists of strings
            if other.count(pinSeparatorSequence) > 1:
                raise ParseError('only one instance of "{}" per entry allowed.'.format(pinSeparatorSequence))
            
            elif other.count(pinSeparatorSequence) == 1:
                inputs, outputs = [o.split(' ') for o in other.split(pinSeparatorSequence)]
            
            else:
                inputs = other.split(' ')
                outputs = []

            # Remove artifacting
            while '' in inputs:
                inputs.remove('')
            while '' in outputs:
                outputs.remove('')

            commands.append(command(
                l + lineNumberOffset,
                e + entryNumberOffset,
                lines[l],
                element,
                inputs,
                outputs,
                args
            ))

    return commands