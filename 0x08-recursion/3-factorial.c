#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n: integer n factorial
 * Return: return factorial of given number, -1 if lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
