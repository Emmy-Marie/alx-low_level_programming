#include "main.h"

/**
 * print_alphabet - Entry point of the program
 * Return:0 (Success)
 */

void print_alphabet(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		_putchar(low);
		low++;
	}
	_putchar('\n');
}
