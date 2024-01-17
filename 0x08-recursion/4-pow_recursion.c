#include "main.h"

/**
 * _pow_recursion - A recursive function that returns the value of x raised to
 *                  the power of y.
 * @x: The given number.
 * @y: The given power.
 * Return: Returns -1 if y < 0 and the result if y >= 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
