#include "main"

/**
 * main - A program that prints all lowercase alphabets
 * Return:0 (Success)
 * _putchar - Function that prints the character c to stdout
 * @c - The character to be printed
 * print_alphabet - A prototype function to print the alphabets
 */

int main(void)
{
	print_alphabet();

	return (0);
}

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
