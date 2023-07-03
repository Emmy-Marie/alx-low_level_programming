#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string
 * @s: A pointer to a string
 * @c: Character to be searched for
 * Return: return a pointer to first occurence of c or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
