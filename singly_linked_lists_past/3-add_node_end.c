#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list.
 * @head: A pointer to the head pointer
 * @str: String to be added in the node.
 * Return: The address of the new or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Declare a pointer to the new node and temporary pointer to head */
	list_t *new_node;
	list_t *box = *head;
	/* Declare a variable to store the length of the string */
	unsigned int len;

	len = 0;
	while (str[len] != '\0') /* Calculate the length of the string */
		len++;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(list_t));

	/* Check for allocation success or fail */
	if (new_node == NULL)
		return (NULL);

	/* Duplicate str and store in new node */
	new_node->str = strdup(str);
	/* Set the length of the new node to the length of the string */
	new_node->len = len;
	/* Let the next pointer point to NULL */
	new_node->next = NULL;
	/* update the head pointer to point to new node. New head of the list */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Go through list until last node */
	while (box->next)
		box = box->next;

	/* Set next pointer of last node to new node */
	box->next = new_node;
	return (new_node);
}
