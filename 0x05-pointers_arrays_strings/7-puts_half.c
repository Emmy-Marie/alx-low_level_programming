#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string pointer variable
 */

void puts_half(char *str)
{
	int length, half;
	char *temp = str;

	length = 0;
	while (*temp != '\0')
	{
		length++;
		temp++;
	}
	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
