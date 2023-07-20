#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Number of variable arguments to be added.
 * Return: return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers; /* Giving my list a name */
	unsigned int i, result;

	/* If n is 0, there are no numbers to add, so return 0 */
	if (n == 0)
	{
		return (0);
	}

	/* Initialize the va_list "numbers" with the variable argument list */
	va_start(numbers, n);

	/* Initialize the result variable to 0 to store the sum of numbers */
	result = 0;

	/* Loop through the variable arguments and sum them up */
	for (i = 0; i < n; i++)
	{
		result += va_arg(numbers, unsigned int);
	}

	/* End of the list */
	va_end(numbers);

	/* Return the final sum of all the numbers */
	return (result);
}
