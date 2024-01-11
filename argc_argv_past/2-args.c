#include "main.h"
#include <stdio.h>

/**
 * main - Entry point - A program that prints all arguments it recieves
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (count < argc)
	{
		printf("%s\n", argv[i]);
		count++;
		i++;
	}
	return (0);
}
