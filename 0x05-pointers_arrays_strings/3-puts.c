#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line
 * @str: The pointer string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
