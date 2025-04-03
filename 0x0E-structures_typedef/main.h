#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>  /* Include stddef.h to use NULL */

/**
 * struct dog - a structure for dog details
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - function prototype for initializing a struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

