#include "main.h"
#include <stdio.h>

int main(void)
{
    int len;

    // Test case 1: Simple string output
    len = _printf("Let's print a simple sentence.\n");
    printf("Printed %d characters.\n", len);

    // Test case 2: Printing a character
    len = _printf("%c", 'S');
    printf("Printed %d characters.\n", len);

    // Test case 3: Printing a character inside a sentence
    len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("Printed %d characters.\n", len);

    // Test case 4: Casting int to char
    len = _printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
    printf("Printed %d characters.\n", len);

    // Test case 5: Printing a string
    len = _printf("%s", "This sentence is retrieved from va_args!\n");
    printf("Printed %d characters.\n", len);

    // Test case 6: Using null string
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    printf("Printed %d characters.\n", len);

    // Test case 7: Edge case with null pointer (for string)
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("Printed %d characters.\n", len);

    // Test case 8: Multiple format specifiers
    len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 
                  'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    printf("Printed %d characters.\n", len);

    // Test case 9: Printing a percent sign
    len = _printf("%%");
    printf("Printed %d characters.\n", len);

    // Test case 10: Printing percent sign with text
    len = _printf("Should print a single percent sign: %%\n");
    printf("Printed %d characters.\n", len);

    // Test case 11: Format specifiers with a big string
    char *str = "man gcc:\nThis is a very long string to test handling large text!";
    len = _printf("%s", str);
    printf("Printed %d characters.\n", len);

    // Test case 12: Null input
    len = _printf(NULL);
    printf("Printed %d characters.\n", len);

    // Test case 13: Edge case with character NULL (should print nothing or an empty character)
    len = _printf("%c", '\0');
    printf("Printed %d characters.\n", len);

    return 0;
}

