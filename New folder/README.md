# Assignment 3: Parser for tinyC

In this assignment we have to build a Parser upon the Lexer built in the previous [assingnment](../Assignment-3/). The grammar for tinyC is given in the problem statement of the Assignment. The input to the parser is a file containing the tinyC code.

The output of the file is a file containing the parse tree generated by the parser. The parse tree is generated for every line in the input tinyC file and is generated in the order in which they appear in the input file.

The output has parse tree edges in the form of a list of tuples. Each tuple contains the parent node and the child node. The nodes are in order from leaf nodes to the root.

## How to run the code

The code is written in C and uses yacc/bison for parsing. The code is compiled using gcc compiler. The code is tested on Ubuntu 20.04 and 22.04. The code can be run using the following commands:

```bash
$ make
```
To clean the directory of all the generated files and the output file:
```bash
$ make clean
```

<!-- ## Files and their description -->
