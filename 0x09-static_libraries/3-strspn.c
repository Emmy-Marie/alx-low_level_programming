#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: pointer to a char
 * @accept: accepted substring
 * Return: the number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}
		if (accept[j] == '\0') /* not found in accept, terminate loop */
			break;
	}

	return (c);
}
