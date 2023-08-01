#include "lists.h"

/**
 * free_listint2 - A function that frees a list
 * @head: A pointer to the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *box;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		box = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
