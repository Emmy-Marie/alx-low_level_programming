#include <stdio.h>

/**
 * main - A program that prints the size of of various types
 * Return:0 (Program success)
 */

int main(void)
{
	char c;
	int i;
	long l;
	long long d;
	float f;

	printf("The size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a int: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a long int: %lu.\n", (unsigned long)sizeof(l));
	printf("The size of a long long int: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}
