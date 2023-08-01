#include "lists.h"

/**
 * pop_listint - A function that deletes the head of a node of a linked list
 * @head: A pointer to the first element of the list
 * Return: The head node's data (n) or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *box;
	int i;

	if (head == NULL || *head == NULL)
		return (0);

	i = (*head)->n;
	box = (*head)->next;
	free(*head);
	*head = box;

	return (i);
}
