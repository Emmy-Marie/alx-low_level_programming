#include "main.h"

/**
 * _isdigit - Checks for digits 0 to 1
 * @c: The integer value of the function
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
