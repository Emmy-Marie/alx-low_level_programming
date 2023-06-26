#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * @s: The string pointer variable
 */

void print_rev(char *s)
{
	int len, a;
	char *tank = s;

/*
 * len = we will first find the length of the string so that we can use each
 *       number as an index to get the string value.
 * tank = we are sort of putting s in a tank becasue at the end of first loop,
 *        tank will be pointing at the null terminator \0. So, when we want
 *        to use s, it will be unchanged and indexing can work as we want it to
 */
	len = 0;
	while (*tank != '\0')
	{
		len++;
		tank++;
	}
	/* Now using the value of the length as index to get the string value */
	a = len - 1;
	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
