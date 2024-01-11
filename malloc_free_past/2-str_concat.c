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
	int i, j, len1, len2, total_len;
	/* check if s1 or s2 is NULL */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Calculate length of both strings and find the total */
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
	/* Allocation of memory to ptr and check for allocation fail */
	ptr = malloc(sizeof(char) * (total_len + 1)); /* add null terminator */
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Concatenante both strings in ptr by iterating over all characters */
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0'; /* Add Null terminator to concatenated string */
	return (ptr);
}
