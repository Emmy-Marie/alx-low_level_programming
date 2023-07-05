#include "main.h"

/**
 * _sqrt_recursion - A function that returns natural square root of a number
 * @n: Integer value
 * Return: Return value of natural square root, -1 if not natural
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	int mid = n / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_recursion(mid + 1));
	}
	else
	{
		return (-1);
	}
}
