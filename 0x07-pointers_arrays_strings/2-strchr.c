#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: A pointer to a string
 * @c: Character to be searched for
 * Return: return a pointer to first occurence of c or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
