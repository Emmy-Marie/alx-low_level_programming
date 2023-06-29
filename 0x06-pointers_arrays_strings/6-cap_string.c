#include "main.h"

/**
 * cap_string - A function that capitalizes a word's first letter of a string
 * @b: char pointer variable
 * Return: capitalized words
 */

char *cap_string(char *b)
{
	int i, j;

	char sep[13] = {' ', '\t', '\n', ',', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	i = 0;
	while (b[i] != '\0')
	{
		if (i == 0 && b[i] >= 'a' && b[i] <= 'z')
		{
			b[i] = b[i] - 32;
		}

		j = 0;
		while (j < 13)
		{
			if (b[i] == sep[j])
			{
				if (b[i + 1] >= 'a' && b[i + 1] <= 'z')
				{
					b[i + 1] = b[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}

	return (b);
}
