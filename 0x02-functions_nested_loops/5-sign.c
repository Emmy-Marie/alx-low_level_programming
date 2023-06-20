#include "main.h"

/**
 * print_sign - Entry point
 * @n: The argument is an integer
 * Return: 1 if greater than zero, 0 if zero and -1 if less than zero
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n > 0)
	{
		_putchar('+');
	}
	else
	{
		_putchar('-');
	}
	return (0);
}
