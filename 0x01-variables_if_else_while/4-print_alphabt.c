#include <stdio.h>

/**
 * main - A program that prints lowercase alphabets except e and q
 * Return:0 (success)
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
		low++;
	}
	putchar('\n');
	return (0);
}
