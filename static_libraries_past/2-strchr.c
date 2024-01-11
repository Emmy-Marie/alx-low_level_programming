#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: A pointer to a string
 * @c: Character to be searched for
 * Return: return a pointer to first occurence of c or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
