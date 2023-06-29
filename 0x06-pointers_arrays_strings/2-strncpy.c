#include "main.h"

/**
 * _strncpy - A function that copies a string with n number of bytes for src
 * @dest: Char pointer variable (destination)
 * @src: Char pointer variable (src)
 * @n: Integer n, number of bytes
 * Return: result of string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
