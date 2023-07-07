#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Entry point - A program that adds positive numbers.
 *        if no number is passed, print 0.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successful and 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, box, sum, num;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	if (atoi(argv[1]) >= 0)
	{
		box = atoi(argv[1]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	for (i = 2; i < argc; i++)
	{
		bool valid = true;
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				valid = false;
				break;
			}
		}

		if (!valid)
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(arg);
		if (num >= 0)
		{
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", box + sum);
	return (0);
}
