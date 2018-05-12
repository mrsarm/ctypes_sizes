C-Types sizes project
=====================

Simple project to build the executable
`ctypes_sizes`, that prints the sizes in bytes
and bits of each C standard type.


Build and execute
-----------------

1. From the source directory, generate the "Makefile":

    $ cmake .

2. *Make* the project and generate the executable "ctypes_sizes":

    $ make

3. Then execute with:

    $ out/ctypes_sizes

To clean the compiled binaries and compiled modules:

    $ make clean

To clean all compiled files and generated "Makefiles":

    $ make clean-all

The output will depends of the target where it was compiled
(and executed). Here is the output in my computer
with x64 architecture (Intel i7) compiled and run with
Linux x64:

    $ out/ctypes_sizes
    char:        1 bytes     (8 bits)
    short:       2 bytes     (16 bits)
    int:         4 bytes     (32 bits)
    long int:    8 bytes     (64 bits)
    long long:   8 bytes     (64 bits)
    float:       4 bytes     (32 bits)
    double:      8 bytes     (64 bits)
    long double: 16 bytes    (128 bits)
    void *:      8 bytes     (64 bits)


About
-----

Source: https://github.com/mrsarm/ctypes_sizes

Authors: (2018) Mariano Ruiz <mrsarm@gmail.cm>

License: GPL-3
