#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string */
	{
		_putchar('\n');  /* Print new line */
		return;
	}
	_putchar(*s);  /* Print current character */
	_puts_recursion(s + 1);  /* Recursive call with next character */
}
