#include <stdio.h>

/**
 * main - Print 1 to 100 and replace multiples of 3 with fizz, 5 with buzz
 * and multiples of both 3 and 5 with fizzBuzz
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	return (0);
}
