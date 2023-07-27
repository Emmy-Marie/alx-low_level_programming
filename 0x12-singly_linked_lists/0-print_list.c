#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list (list_t).
 * @h: A singly linked list.
 * Return: The number of nodes (number of elements).
 */

size_t print_list(const list_t *h)
{
	/* Declare and initialize variable to keep track of node count */
	size_t no_of_nodes;

	no_of_nodes = 0;
	/* Iterate through the list until end is reached (h == NULL) */
	while (h != NULL)
	{
		if (h->str == NULL)
			/* If NULL, print nil with length 0 */
			printf("[%d] %s\n", 0, "(nil)");
		else
			/* If str is not NULL, print its lenght and content */
			printf("[%d] %s\n", h->len, h->str);
		/* Move to the next node in the list */
		h = h->next;
		/* Increment the count of nodes */
		no_of_nodes++;
	}
	/* Return the total number of nodes in the linked list */
	return (no_of_nodes);
}
