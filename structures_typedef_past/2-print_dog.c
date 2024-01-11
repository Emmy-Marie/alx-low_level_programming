#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - A function that prints a struct dog
 * @d: A pointer to struct dog
 */

void print_dog(struct dog *d)
{
	/* Check if d is NULL */
	if (d == NULL)
	{
		return; /* if d is NULL, print nothing */
	}

	/* Check if name is NULL */
	if (d->name == NULL)
	{
		d->name = "(nil)"; /* Assign (nil) to name if it is NULL */
	}

	/* Check if owner is NULL */
	if (d->owner == NULL)
	{
		d->owner = "(nil)"; /* Assign (nill) to owner if it is NULL */
	}

	/* Print the dog's information */
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
