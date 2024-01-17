#include "main.h"

/**
 * factorial - A recursive function that returns the factorial of a number.
 * @n: The given number.
 * Return: Returns -1 if number < 0 and factorial of given number >= 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
