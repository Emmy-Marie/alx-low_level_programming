#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space in
 *           memory, which contains a copy of the string given as a parameter
 * @str: String to be copied.
 * Return: Null if str = NULL. Return a pointer to the duplicated string. Also,
 *         return NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int len, i;
	char *str_new;

	/* Check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Calculate the length of str */
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	/* Allocate memory for the new string (null terminator inclusive) */
	str_new = malloc(sizeof(char) * (len + 1));

	/* Check if memory allocation was successful */
	if (str_new == NULL)
	{
		return (NULL);
	}

	/* Copy characters from str to str_new */
	for (i = 0; i < len; i++)
	{
		str_new[i] = str[i];
	}
	str_new[i] = '\0'; /* Add the null terminator */

	/* Free memory if insufficient memory was available */
	if (str_new[len] != '\0')
	{
		free(str_new);
		return (NULL);
	}
	return (str_new);
}
