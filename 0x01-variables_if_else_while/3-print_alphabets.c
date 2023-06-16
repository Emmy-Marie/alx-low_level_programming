#include <stdio.h>

/**
 * main - A program that prints the alphabets in lower and higher case
 * Return:0 (success)
 */

int main(void)
{
	char low = 'a';
	char up = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	putchar('\n');
	return (0);
}
