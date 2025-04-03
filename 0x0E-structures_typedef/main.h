#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>  /* Include stddef.h to use NULL */

/**
 * struct dog - a dog structure
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

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */

