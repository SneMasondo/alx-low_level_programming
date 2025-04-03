# _printf - Custom Implementation of printf  

## Description  
`_printf` is a simplified version of the standard C `printf` function. It allows formatted output to be printed to standard output using specific format specifiers. This project is part of the ALX Software Engineering program.  

## Features  
- Supports the following format specifiers:  
  - `%c` → Prints a single character  
  - `%s` → Prints a string  
  - `%%` → Prints the percentage symbol `%`  
- Returns the number of characters printed (excluding the null byte)  
- Uses `write` instead of `printf`  
- Complies with the Betty coding style  

---

## Requirements  

### General  
- Allowed editors: `vi`, `vim`, `emacs`  
- Compiled on **Ubuntu 20.04 LTS** with:  
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

