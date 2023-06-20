#include "main.h"

/**
 * print_alphabet_x10() - A program that prints all alphabets 10 times
 * Return:0 - (success)
 */

void print_alphabet_x10(void)
{
	char low;
	int i;

	i = 0;
	while (i < 10)
	{
		low = 'a';
		while (low <= 'z')
		{
			_putchar(low);
			low++;
		}
		_putchar(low);
		i++;
	}
}
