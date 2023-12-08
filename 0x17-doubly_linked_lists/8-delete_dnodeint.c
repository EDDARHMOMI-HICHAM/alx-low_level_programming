#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the stint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && i < index - 1)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	temp = current_node->next;
	current_node->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = current_node;

	free(temp);

	return (1);
}
