#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The string pointer variable
 */

void rev_string(char *s)
{
	int length, left, right;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	/* Reverse string by swapping characters */
	left = 0;
	right = length - 1;
	while (left < right)
	{
		/* Swap characters */
		char temp;

		temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		/* Move left pointer forward and right pointer backward */
		left++;
		right--;
	}
}
