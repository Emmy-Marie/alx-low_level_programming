#include <stdio.h>

/**
 * main - print single base 10 digits using putchar function
 * Return:0 (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
