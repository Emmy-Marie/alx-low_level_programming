#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 *                           at a given position.
 * @head: A pointer to the first node
 * @idx: Index of the list where the new node should be added
 * @n: data to insert in the new node
 * Return: The address of the new node or NULL if it failed
 */

 listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
 {
	 unsigned int i;
	 listint_t *new_node;
	 listint_t *box = *head;

	 new_node = malloc(sizeof(listint_t));
	 if (new_node == NULL || head == NULL)
		 return (NULL);

	 new_node->n = n;
	 new_node->next = NULL;

	 if (idx == 0)
	 {
		 new_node->next = *head;
		 *head = new_node;
		 return (new_node);
	 }

	 for (i = 0; box && i < idx; i++)
	 {
		 if (i == idx - 1)
		 {
			 new_node->next = box->next;
			 box->next = new_node;
			 return (new_node);
		 }
		 else
			 box = box->next;
	 }

	 return (NULL);
 }
