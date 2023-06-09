#!/bin/bash
# This script creates a static library called liball.a from all the .c files in the current directory

# Compile all the .c files into object files using gcc with -c flag
gcc -c -Wall -Werror -Wextra *.c

# Create the static library using ar with -rc flags and the name of the library
ar -rc liball.a *.o

# Optionally, run ranlib on the library to generate an index of its contents
ranlib liball.a
