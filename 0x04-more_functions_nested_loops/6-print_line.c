#include "main.h"

/**
 * print_line - Draw a straight line
 * @n: Integer number of times _ is printed. if n is 0 or less, print new line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
