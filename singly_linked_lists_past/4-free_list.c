#include "lists.h"

/**
 * free_list - A function that frees a list
 * @head: The list to be freed
 */

void free_list(list_t *head)
{
	list_t *box;

	while (head != NULL)
	{
		box = head->next;
		free(head->str);
		free(head);
		head = box;
	}
}
