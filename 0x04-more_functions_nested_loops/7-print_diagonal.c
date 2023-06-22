#include "main.h"

/**
 * print_diagonal - Draw diagonal lines
 * @n: integer number of lines. If 0 or less, print new line
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (b == a)
				{
					_putchar('\\');
				}
				else if (b < a)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
