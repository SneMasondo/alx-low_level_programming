#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up the .o files (optional, remove if you want to keep them)
rm -f *.o

