# Recursion in C

## Description
This project demonstrates the use of recursion in C to print strings followed by a newline. It includes the implementation of the `_puts_recursion` function, which prints each character of a string recursively, without using loops. The project also contains a simple implementation of `_putchar`, which is used for outputting characters to the console.

## Files
- `main.h` - Header file containing function prototypes.
- `_putchar.c` - Function to print a single character to stdout.
- `0-puts_recursion.c` - Function that prints a string using recursion.
- `0-main.c` - Main test file that demonstrates the function usage.

## Compilation
To compile the program, use the following `gcc` command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
