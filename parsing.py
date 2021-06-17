import sys

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
        self.element = element  # Element type
        self.inputs = inputs    # List of inputs
        self.outputs = outputs  # List of outputs
        self.args = args        # List of arguments
        
    def __repr__(self):
        return 'command "{}" on line {}'.format(self.text, self.line)

    def info(self):
        infoStr = self.__repr__()
        infoStr += '\nself.line: {}'.format(self.line)
        infoStr += '\nself.entry: {}'.format(self.entry)
        infoStr += '\nself.text: {}'.format(self.text)
        infoStr += '\nself.element: {}'.format(self.element)
        infoStr += '\nself.inputs: {}'.format(self.inputs)
        infoStr += '\nself.outputs: {}'.format(self.outputs)
        infoStr += '\nself.args: {}'.format(self.args)
        return infoStr

# Function to parse .lgc and .ttb source code and return a list of commands.
def parseCommands(lines):
    commands = []
    for l in range(len(lines)):
        line = lines[l].split(commentSequence)[0]       # Take out comments
        entries = line.split(entrySeparatorSequence)    # Get individual entries
        # Remove artifacting
        while '' in entries:
            entries.remove('')

        for e in range(len(entries)):
            entry = entries[e]      # Iterate through each entry on the line
            # Remove artifacting
            while entry[0] == ' ':
                entry = entry[1:]

            element = entry.split(' ')[0]   # The element being called
            other = ' '.join(entry.split(' ')[1:])  # Everything else, to be consumed bit by bit
            
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

if __name__ == '__main__':
    with open(sys.argv[1], 'r') as file:
        lines = file.read().split('\n')
        print('Parsing file "{}" ({} lines)'.format(sys.argv[1], len(lines)))
        commands = parseCommands(lines)
    for comm in commands:
        print(comm.info())