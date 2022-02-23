![Logical Logo](/images/Logo128.png)
# What is Logical?
Logical is a Hardware Description Language and command-line logic simulator. More complicated logic elements that don't necessarily need to be implemented in Logical can be implemented in Python instead! The availability of Python allows you to simulate devices like memory without having to design and simulate millions of gates for a single, albeit complex, component. This greatly increases the speed of simulation, allowing for the simulation of more complex designs.

## Language
Logical uses a [hardware description language](https://en.wikipedia.org/wiki/Hardware_description_language) called Logical to determine what layout of elements to simulate. Logical is also used for truth tables (also known as [lookup tables](https://en.wikipedia.org/wiki/Lookup_table)). Logical uses [Python](https://python.org) to define behaviors for custom elements.

### Logical
Logical is designed to be as simple as possible, utilizing a simple `element inputs > outputs & args` structure for every "command". Logical can be used for element layout or truth tables, depending on the file extenson. `.lgc` indicates element layout and `.ttb` indicates truth tables. For information on Logical syntax, see [Syntax](./syntax.md).

### Python
Python is used for custom element definitions. The code for such an element is placed inside a `.py` file. A few global values are already declared to allow for interfacing with other elements. It should be made clear that what you are doing when simulating Python elements is **running a python script**. For that reason **DO NOT** simulate an untrusted Python element without first examining it. I am not responsible for any damage or loss caused by simulating Python elements. For more information on Python and integrating it into Logical, see [Python Elements](./pyElements.md).