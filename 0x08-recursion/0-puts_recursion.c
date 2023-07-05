#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * @s: A pointer to a char
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}
