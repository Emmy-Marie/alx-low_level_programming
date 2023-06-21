#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: An integer
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	if (n > 10)
	{
		return (n % 10);
	}
	if (n > 0 && n < 10)
	{
		return (n);
	}
	if (n < 0 && n < -10)
	{
		return (n);
	}
	else
	{
		return (n % 10);
	}
}
