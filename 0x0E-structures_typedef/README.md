# Dog Structure Definition

This project defines a structure `struct dog`, which holds information about a dog, including its name, age, and owner.

## Files

- `dog.h`: Contains the definition of the `struct dog` structure.
- `main.c`: Example of how to use the `struct dog` structure (if applicable).

## Structure Definition

The structure `struct dog` has the following members:

- `name`: A pointer to a string representing the dog's name (type `char *`).
- `age`: A floating-point number representing the dog's age (type `float`).
- `owner`: A pointer to a string representing the owner's name (type `char *`).

## Example Usage

```c
#include "dog.h"

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Buddy";
	my_dog.age = 5.0;
	my_dog.owner = "Alice";

	return 0;
}

