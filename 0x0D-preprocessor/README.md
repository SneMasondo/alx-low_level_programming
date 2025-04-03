# Project Name

This project defines a macro named `SIZE` as an abbreviation for the token `1024`.

## File Structure

- `size.h`: Header file that defines the macro `SIZE` with a value of `1024`.

## How to Use

To use the `SIZE` macro, simply include the `size.h` header file in your C program:

```c
#include "size.h"

int main(void)
{
    printf("The value of SIZE is: %d\n", SIZE);
    return 0;
}

