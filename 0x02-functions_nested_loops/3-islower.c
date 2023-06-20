#include "main.h"

/**
 * _islower - Entry point
 * @c - The integer value
 * Return:1 - if c is lower case
 * Return:0 - if otherwise
 */

int _islower(int c)
{
	int c = c + '0';

	if (c < 'a' || c > 'z')
	{
		_putchar('0');
	}
	else
	{
		_putchar('1');
	}
}
