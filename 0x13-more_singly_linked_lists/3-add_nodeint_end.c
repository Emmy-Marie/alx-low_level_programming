#include "lists.h"

/**
 * add_nodeint_end - A function that adds a node at the end of a list
 * @head: A pointer to the first node
 * @n: Data of the new node
 * Return: The address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *box = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (box->next)
		box = box->next;

	box->next = new_node;

	return (new_node);
}
