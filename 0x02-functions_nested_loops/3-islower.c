#include "main.h"

/**
 * _islower - Entry point
 * @c: The integer value
 * Return:0 - (Success)
 */

int _islower(int c)
{
	int c;

	while (c >= 0)
	{
		r = _putchar(c + '0');
		if (r < 'a' || r > 'z')
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
	}
	return (0);
}
