#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: pointer to a char variable
 * @b: constant char value that will be used to fill the memory block
 * @n: number of bytes to be filled with char b starting from s
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s; /* p initially points to the same location as s */
	unsigned int j;

	j = 0;
	for (j = 0; j < n; j++)
	{
		*p = b; /* byte pointed to by p is set to the value of b */
		p++; /* p increments to point to the next byte */
	}

	return (s); /* we return the function to the original pointer s */
}
