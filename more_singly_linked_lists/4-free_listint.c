#include "lists.h"

/**
 * free_listint - A function that frees a list
 * @head: A pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *box;

	while (head != NULL)
	{
		box = head->next;
		free(head);
		head = box;
	}
}
