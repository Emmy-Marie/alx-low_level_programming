#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - A function that returns the length of a string
 * @s: char pointer variable
 * Return: (len) is the length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * _strcpy - Copy the string pointed to by source to the buffer pointed
 *           by the destination.
 * @dest: destination pointer
 * @src: Source pointer
 * Return: The destination pointer.
 */

char *_strcpy(char *dest, char *src)
{
	char *origin_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (origin_dest);
}

/**
 * new_dog - creates a new dog
 * @name: First element - name of the dog
 * @age: Second element - age of the dog
 * @owner: Third element - owner of the dog
 * Return: return pointer to the new dog or NULL if otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	/* Calculate the length of name and owner strings */
	len1 = _strlen(name);
	len2 = _strlen(owner);

	/* Allocate memory for dog struct */
	dog = malloc(sizeof(dog_t));

	/* Check for allocation fail */
	if (dog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for name string */
	dog->name = malloc(sizeof(char) * (len1 + 1));

	/* Check for allocation fail */
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	/* Allocate memory for owner string */
	dog->owner = malloc(sizeof(char) * (len2 + 1));

	/* Check for allocation fail and free if NULL */
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	/* Copy name and owner strings to allocated memory */
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	/* Set the age of the dog */
	dog->age = age;

	return (dog);
}
