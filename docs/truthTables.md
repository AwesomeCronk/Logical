# Truth Tables
Truth tables follow the same format as normal Logical code. A Truth table file can only contain two types of elements: `$pins` config element and `match` element. `$pins` is used as normal, though `match` is special. It takes the same number of inputs/outputs as defined in `$pins` and takes no arguments. Comments can be used in truth table files with the `//` sequence. The following example is a truth table that matches an XOR gate.
```logical
$pins a b > y

match 0 0 > 0
match 0 1 > 1
match 1 0 > 1
match 1 1 > 0
```