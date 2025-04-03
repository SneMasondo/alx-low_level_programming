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
	char password[15];  /* Adjusted to 15 characters */
	int i, sum = 0;

	srand(time(NULL)); /* Initialize random seed */

	for (i = 0; i < 14; i++) /* Loop to generate 14 characters */
	{
		/* Randomly generate a character between '!' and '~' (ASCII 33 to 126) */
		password[i] = (rand() % 94) + 33;
		sum += password[i];
	}

	/* Last character is the value needed to make the sum match the key */
	password[14] = (sum ^ 0xE5); /* XOR with a constant value (key) */

	password[15] = '\0'; /* Null-terminate the string */

	printf("%s\n", password); /* Print the generated password */

	return (0);
}
