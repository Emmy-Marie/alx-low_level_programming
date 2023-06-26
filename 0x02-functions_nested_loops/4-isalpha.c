#include "main.h"

/**
 * _isalpha - Entry point
 * @c: The argument of the function is an interger
 * Return: 1 if c is a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
