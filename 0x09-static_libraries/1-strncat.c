#include "main.h"

/**
 * _strncat - A function that concatenates two strings using n bytes
 * @dest: char pointer variable (destination)
 * @src: char pointer variable (source)
 * @n: maximum bytes in integer
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
