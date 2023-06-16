#include <stdio.h>

/**
 * main - A program that prints lowercase letters and ignores specified letters
 * Return:0 (success)
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z' && low != 'e' || low != 'q')
	{
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
