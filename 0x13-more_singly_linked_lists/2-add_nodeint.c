#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning of a list
 * @head: A pointer to the first node in the list
 * @n: Data of the new node
 * Return: The address of the new element or NUll if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
