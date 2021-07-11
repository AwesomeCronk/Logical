# Syntax
This page details the syntax rules of Logical.

## Entries
An entry is a single instruction for the Logical interpreter. Entries usually occupy their own lines, though multiple entries can be used on one line, provided they are separated by semicolons (`;`).

In this example, `and a b > y`, `xor a b > c`, and `led y & 255 0 0 1 1` are entries.
```logical
and a b > y; xor a b > c
led y & 255 0 0 1 1
```
Entries have four main components: the element, the inputs, the outputs, and the arguments. Within each entry, the indivual components are separated by spaces. The element is the first component in the entry, with the inputs following it, up until either the outputs (`>`) or arguments (`&`) separators. After the outputs separator (`>`) come the outputs, also separated by spaces. After the arguments separator (`&`) come the arguments, again, separated by spaces.

In this example, `and` is the element, `a` and `b` are inputs, and `y` is an output.
```logical
and a b > y
```
In this example, `led` is the element, `y` is the input, and `255`, `0`, `0`, `1`, and `1` are the arguments.
```logical
led y & 255 0 0 1 1
```

Inputs, outputs, and arguments are not required by all elements, but the arguments must follow the outputs, which must in turn follow the inputs.

## Config
A file may have one or more config entries. These entries tell the interpreter which files to include within the current file, what name to alias them under, what pins the file has, and more. Config entries follow the format of normal entries, except that the element component is prefixed with a dollar sign (`$`).

There are two config statements: `$pins` and `$include`. `$pins` tells the interpreter what pins to attach to the element that file represents and whether they are inputs or outputs.

For `$pins`, list the inputs and outputs just as you would a normal element. In this example `a` and `b` are inputs, while `y` is an output.
```logical
$pins a b > y
```

For `$include`, give the path to the file (relative to the current file) as the input and the name to include it under as the output. This example includes the file `halfAdder.lgc` and give it the name `hAdder`.
```logical
$include halfAdder.lgc > hAdder
```

## Comments
Anything to the right of the comment separator (`//`) is completely ignored by the interpreter. This includes any entries there.
```logical
and a b > y     // This is a comment
```

## Readability
Personally, I prefer camelCase for a naming scheme. However, I cannot make rules on how you write your code. Write it how you feel it is the most readable. If it works it works.
