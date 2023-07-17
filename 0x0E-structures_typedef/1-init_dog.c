#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - A function that initializes a variable of type struct dog.
 * @d: A pointer to struct dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if d is NULL */
	if (d == NULL)
	{
		/* Allocate memory for new struct dog if d is NULL */
		d = malloc(sizeof(struct dog));
	}

	/* Assgn the name, age and owner values to struct dog members */
	d->name = name;
	d->age = age;
	d->owner = owner;
}
