#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A Function that concatenates two strings
 * @s1: First String
 * @s2: Second string
 * Return: A pointer that points to a newly allocated space in memory
 *         which contains the concatenated strings. Also, return Null if fail
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int a, b, len1, len2, total_len;

	if (s1[1] == '\0')
	{
		s1 = "";
	}
	if (s2[1] == '\0')
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	total_len = len1 + len2;
	ptr = malloc(sizeof(char) * (total_len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len1; a++)
	{
		ptr[a] = s1[a];
	}

	for (b = 0; b < len2; b++)
	{
		ptr[a] = s2[b];
		a++;
	}
	ptr[a] = '\0';

	return (ptr);
}
