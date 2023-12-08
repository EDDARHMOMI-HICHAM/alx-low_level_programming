#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node atsition in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 * If it is not possible to add the new nohe new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i = 0;

	if (h == NULL)
		return NULL;

	if (idx == 0)
		return add_dnodeint(h, n);

	current_node = *h;
	while (current_node != NULL && i < idx - 1)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
		return NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->prev = current_node;
	new_node->next = current_node->next;

	if (current_node->next != NULL)
		current_node->next->prev = new_node;

	current_node->next = new_node;

	return (new_node);
}
