#include <stdio.h>

void initial(void) __attribute__ ((constructor));

/**
 * initial - A function that printsstrings before main compilation
 */

void initial(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
