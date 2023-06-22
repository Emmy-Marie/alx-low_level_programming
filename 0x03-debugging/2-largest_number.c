#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (c > a)
		{
			largest = c;
		}
		else
		{
			largest = a;
		}
	}
	else if (b > a)
	{
		if (c > b)
		{
			largest = c;
		}
		else
		{
			largest = b;
		}
	}
	else if (c > b)
	{
		if (b > a)
		{
			largest = c;
		}
	}

	return (largest);
}
