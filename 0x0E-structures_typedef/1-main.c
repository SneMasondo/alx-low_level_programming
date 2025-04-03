#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("Dog's name: %s\n", my_dog.name);
	printf("Dog's age: %.1f\n", my_dog.age);
	printf("Dog's owner: %s\n", my_dog.owner);

	return (0);
}

