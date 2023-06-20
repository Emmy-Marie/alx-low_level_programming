#include "main.h"

/**
 * main - A program that prints all lowercase alphabets
 * Return:0 (Success)
 * _putchar - Function that prints the character c to stdout
 * @c - The character to be printed
 * print_alphabet - A prototype function to print the alphabets
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

	return (0);
}
