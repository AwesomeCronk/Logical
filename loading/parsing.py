import sys

commentSequence = '//'
includeSequence = '$include'
pinsSequence = '$pins'
entrySeparatorSequence = ';'
argumentSequence = '&'
pinSeparatorSequence = '>'
bussingSequence = ['[', '..', ']']

lineNumberOffset = 1
entryNumberOffset = 1
maxEntriesPerLine = 50

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
        return 'command \'{}\' on line {}'.format(self.text, self.line)

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

            # Hopefully can remove by using str.split() instead of str.split(' ')
            # # Remove artifacting
            # while entry[0] == ' ':
            #     entry = entry[1:]

            element = entry.split()[0]   # The element being called
            other = ' '.join(entry.split()[1:])  # Everything else, to be consumed bit by bit
            
            # Split at the argument separator and subsequently at spaces
            if other.count(argumentSequence) > 1:
                raise ParseError('Only one instance of "{}" per entry allowed.'.format(argumentSequence))
            
            if other.count(argumentSequence) == 1:
                other, args = other.split(argumentSequence)
                args = args.split()
                strings = []
                inString = False
                for i, arg in enumerate(args):
                    if arg[0] == '"':
                        start = i
                        inString = True
                    if arg[-1] == '"':
                        end = i + 1
                        strings.insert(0, (start, end)) # insert instead of append to avoid having to reverse it later
                        inString = False
                if inString:
                    raise ParseError('Unmatched string operators: ""')
                for start, end in strings:
                    args[start:end] = [' '.join(args[start:end])[1:-1]]
            else:
                args = []

            # Split at the pin separator and subsequently at spaces
            # inputs and outputs should both be lists of strings
            if other.count(pinSeparatorSequence) > 1:
                raise ParseError('Only one instance of "{}" per entry allowed.'.format(pinSeparatorSequence))
            
            elif other.count(pinSeparatorSequence) == 1:
                inputs, outputs = [o.split() for o in other.split(pinSeparatorSequence)]
            
            else:
                inputs = other.split()
                outputs = []

            # Detect bussing syntax errors
            for i in inputs:
                # print(i, i.count(bussingSequence[0]), i.count(bussingSequence[2]))
                if i.count(bussingSequence[0]) > 1 or i.count(bussingSequence[2]) > 1:
                    raise ParseError('Too many bussing operators: {}{}'.format(bussingSequence[0], bussingSequence[2]))
                if i.count(bussingSequence[0]) != i.count(bussingSequence[2]):
                    raise ParseError('Unmatched bussing operators: {}{}'.format(bussingSequence[0], bussingSequence[2]))
            for o in outputs:
                # print(o, o.count(bussingSequence[0]), o.count(bussingSequence[2]))
                if o.count(bussingSequence[0]) > 1 or o.count(bussingSequence[2]) > 1:
                    raise ParseError('Too many bussing operators: {}{}'.format(bussingSequence[0], bussingSequence[2]))
                if o.count(bussingSequence[0]) != o.count(bussingSequence[2]):
                    raise ParseError('Unmatched bussing operators: {}{}'.format(bussingSequence[0], bussingSequence[2]))

            # Detect bussing (i.e. "data[0..25]")
            for index, i in enumerate(inputs):
                if bussingSequence[0] in i:
                    name, bussing = i[0:-1].split(bussingSequence[0])
                    # print(name, bussing)
                    begin, end = bussing.split(bussingSequence[1])
                    if len(begin) > len(end):
                        length = len(begin)
                    else:
                        length = len(end)
                    # print(begin, end)
                    begin = int('0x' + begin, base=16)
                    end = int('0x' + end, base=16)
                    # print(begin, end)

                    inputs[index] = name + hex(begin)[2:]
                    for j in range(1, end - begin + 1):
                        inputs.insert(index + j + 1, (name + hex(j)[2:]).zfill(length))

            for index, o in enumerate(outputs):
                if bussingSequence[0] in o:
                    name, bussing = o[0:-1].split(bussingSequence[0])
                    # print(name, bussing)
                    begin, end = bussing.split(bussingSequence[1])
                    if len(begin) > len(end):
                        length = len(begin)
                    else:
                        length = len(end)
                    # print(begin, end)
                    begin = int('0x' + begin, base=16)
                    end = int('0x' + end, base=16)
                    # print(begin, end)

                    outputs[index] = name + hex(begin)[2:]
                    for j in range(1, end - begin + 1):
                        outputs.insert(index + j + 1, (name + hex(j)[2:]).zfill(length))


            # Hopefully can remove by using str.split() instead of str.split(' ')
            # # Remove artifacting
            # while '' in inputs:
            #     inputs.remove('')
            # while '' in outputs:
            #     outputs.remove('')

            if element == includeSequence:
                if len(inputs) != 1 or len(outputs) != 1:
                    raise ParseError('{} must have file name and element name separated by {}'.format(includeSequence, pinSeparatorSequence))

            

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

    for l, line in enumerate(lines):    # l is line number and line is line text
        lineRemaining = line
        for i in range(maxEntriesPerLine):
            lineRemaining = parseEntry(lineRemaining, i)
            if lineRemaining == '':
                break

if __name__ == '__main__':
    with open(sys.argv[1], 'r') as file:
        lines = file.read().split('\n')
        print('Parsing file "{}" ({} lines)'.format(sys.argv[1], len(lines)))
        commands = parseCommands(lines)
    for comm in commands:
        print(comm.info())