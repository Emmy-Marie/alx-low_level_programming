#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: Number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers; /* Giving my list a name */
	unsigned int i;

	/* Initialize the va_list "numbers" with the variable argument list */
	va_start(numbers, n);

	/* If separator is null, do not print. If n is 0, no numbers to print */
	if (separator == NULL || n == 0)
	{
		return;
	}

	/* Loop through the arguments,print the numbers and string in between */
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		/* Condition: Don't print string after the last number */
		if (i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n"); /* New line */

	/* End of the list */
	va_end(numbers);
}
