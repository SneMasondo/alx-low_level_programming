# Project Title

A brief description of your project.

## Description

Provide a detailed explanation of what the project is about. What does it do? What problem does it solve? This section should give an overview of the functionality of your project.

## Requirements

- **Operating System**: Ubuntu 20.04 LTS
- **Compiler**: GCC (with flags -Wall -Werror -Wextra -pedantic -std=gnu89)
- **Editors**: vi, vim, emacs
- **Other**: No global variables, no standard library functions like `printf`, etc.

## File Structure

- **main.h**: Contains the prototypes of all functions.
- **source_files**: Contains the C files implementing your functions.
- **README.md**: This file, which explains the project.

## How to Compile

1. Clone the repository.
2. Use the following command to compile the files:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
