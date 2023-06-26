#include "main.h"

/**
 * puts2 - A function that prints every other character of a string starting
 *         with the first
 * @str: the string pointer variable
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
