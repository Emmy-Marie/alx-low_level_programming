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
	va_list list; /* Giving my list a name */
	unsigned int i;

	/* Initialize the va_list "list" with the variable argument list */
	va_start(list, n);

	/* Loop through the arguments,print the numbers and string in between */
	for (i = 0; i < n; i++)
	{
		/* If separator is NULL, do not print the string */
		if (separator == NULL)
		{
			printf("%d", va_arg(list, int));
		}
		/* Print the first number if separator is not NULL*/
		else if (separator != NULL && i == 0)
		{
			printf("%d", va_arg(list, int));
		}
		/* Print the string followed by other numbers */
		else
		{
			printf("%s%d", separator, va_arg(list, int));
		}
	}
	printf("\n"); /* New line */

	/* End of the list */
	va_end(list);
}
