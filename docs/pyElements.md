# Python Elements
Python elements, loaded from `.py` files, use Python syntax. The version of python is the same version shown in the title bar when Logical is running.

## Element Definitions and Arguments
The `.py` file must contain one class called `pyElement` that inherits from `element`. Any arguments supplied in the Logical code are passed as arguments to `pyElement.__init__`. Four names need not be defined that can be used: `element`, `pin`, `widget`, and `vec2`.

## Inputs and Outputs
To add an input to a Python element, call `self.addInput(pin('pinName'))` somewhere in `pyElement.__init__` or a function called by it. To add an output use `self.addOutput(pin('pinName'))`. **Never** call either of these functions in `pyElement.update` or any function called by it.

## Update Cycle
To make a Python element change its outputs' values, you must define the method `pyElement.update`. `pyElement.update` is given no arguments. The value of an input pin is stored in `self.inputs[inputPinName].value`. To set the value of an output pin, call `self.outputs[outputPinName].set(value)`, where `value` is either integer 0 or integer 1.

## Key Bindings
I don't even know...