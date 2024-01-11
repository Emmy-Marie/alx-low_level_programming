#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data(n) of a list
 * @head: A pointer to the first node
 * Return: Sum of all data in the list or return 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *box = head;

	while (box != NULL)
	{
		sum += box->n;
		box = box->next;
	}

	return (sum);
}
