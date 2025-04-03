# Static Library - libmy.a

## Description
This project contains a static library `libmy.a` that includes implementations of various functions commonly used in C programming. These functions are designed to handle tasks such as character manipulation, string operations, memory management, and more.

### Functions Implemented:

- **_putchar**: Writes a character to stdout.
- **_islower**: Checks if a character is lowercase.
- **_isalpha**: Checks if a character is alphabetic.
- **_abs**: Computes the absolute value of an integer.
- **_isupper**: Checks if a character is uppercase.
- **_isdigit**: Checks if a character is a digit.
- **_strlen**: Returns the length of a string.
- **_puts**: Prints a string to stdout.
- **_strcpy**: Copies a string to another.
- **_atoi**: Converts a string to an integer.
- **_strcat**: Concatenates two strings.
- **_strncat**: Concatenates a portion of one string to another.
- **_strncpy**: Copies a portion of a string to another.
- **_strcmp**: Compares two strings.
- **_memset**: Sets a memory block to a specific value.
- **_memcpy**: Copies a memory block to another.
- **_strchr**: Locates a character in a string.
- **_strspn**: Returns the length of the initial segment of a string that consists only of characters from another string.
- **_strpbrk**: Searches for the first occurrence of a character from one string in another.
- **_strstr**: Finds the first occurrence of a substring in a string.

## Compilation

To create the static library `libmy.a`, use the following commands:

1. **Compile the source file:**

   ```bash
   gcc -c my_functions.c
