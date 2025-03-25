#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[7]; /* Password length is 6 + 1 for the null terminator */
	int i;

	srand(time(NULL)); /* Initialize random seed */

	for (i = 0; i < 6; i++)
	{
		/* Randomly generate a character between '!' and '~' (ASCII 33 to 126) */
		password[i] = (rand() % 94) + 33;
	}

	password[6] = '\0'; /* Null-terminate the string */

	printf("%s\n", password); /* Print the generated password */

	return (0);
}
