#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index of a list
 * @head: A pointer to the first node
 * @index: index of the node to be deleted
 * Return: 1 if success and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *box = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(box);
		return (1);
	}

	while (i < index - 1)
	{
		if (!box || !(box->next))
			return (-1);
		box = box->next;
		i++;
	}

	current = box->next;
	box->next = current->next;
	free(current);

	return (1);
}
