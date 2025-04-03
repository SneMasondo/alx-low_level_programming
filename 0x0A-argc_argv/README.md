# 0x0A. argc, argv

## Description
This project is focused on handling command-line arguments in C using the `argc` and `argv` parameters. The goal is to practice printing the name of the program and understanding how to work with arguments passed to the program.

### Task 0: WhatsMyName
- Write a program that prints its name, followed by a new line.
- The program will print the correct name even after renaming the executable file.
- You should not remove the path before the name of the program.

## Requirements
- **Allowed editors**: vi, vim, emacs
- **Compilation**: The code should be compiled with `gcc` using the following flags:
  - `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding Style**: The program must adhere to the Betty style guide:
  - Code indentation must use tabs.
  - No spaces at the beginning of lines.
- **Functionality**: The program should print its name correctly, even if the program is renamed without recompiling.

## Usage
To compile the program:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis

