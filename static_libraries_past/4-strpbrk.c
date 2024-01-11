#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - A function that searches a string for any set of bytes.
 * @s: pointer to char
 * @accept: pointer to char of accepted characters
 * Return: point to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
