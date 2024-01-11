#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list
 * @h: A pointer to list_t
 * Return: number of the elements in the list
 */

size_t list_len(const list_t *h)
{
	/* Declare and initialize variable to store length of the list */
	size_t no_of_elements;

	no_of_elements = 0;
	/* While h is not NULL, iterate through the list */
	while (h != NULL)
	{
		no_of_elements++; /* Increment for each counted node */
		h = h->next; /* Move the pointer 'h' to the next node */
	}
	/* Return the final count of the elements in the list */
	return (no_of_elements);
}
