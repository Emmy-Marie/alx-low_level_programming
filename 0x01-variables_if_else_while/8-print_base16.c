#include <stdio.h>

/**
 * main - A program that prints all base 16 numbers in lowercase
 * Return:0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + '0');
			i++;
		} else
		{
			putchar(i - 10 + 'a');
			i++;
		}
	}
	putchar('\n');
	return (0);
}
