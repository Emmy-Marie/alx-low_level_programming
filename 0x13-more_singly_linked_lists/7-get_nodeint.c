#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a linked list
 * @head: A pointer to the first node in the list
 * @index: index of the node to return
 * Return: Return the nth node or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *box = head;

	while (box != NULL && i < index)
	{
		box = box->next;
		i++;
	}

	if (box != NULL)
		return (box);
	else
		return (NULL);
}
