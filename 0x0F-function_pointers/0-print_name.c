#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name.
 * @name: String to be printed (name).
 * @f: A pointer that points to the print_name function.
 * Return: Returns nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	/* Derefernce the function pointer & invoke the function it points to */
	(*f)(name); /* Pass 'name' as an argument */
}
