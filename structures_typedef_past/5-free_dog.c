#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees memory allocated for struct dog
 * @d: pointer to struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);/* Free memory allocated for the name string */
		free(d->owner);/* Free memory allocated for the owner string */
		free(d);/* Free the memory allocated for the struct dog */
	}
}
