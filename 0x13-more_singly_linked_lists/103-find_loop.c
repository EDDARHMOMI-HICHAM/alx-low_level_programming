#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a listint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: The address of the node where ...
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head;
	hare = head->next;

	while (tortoise != hare)
	{
		if (hare == NULL || hare->next == NULL)
			return (NULL);
		tortoise = tortoise->next;
		hare = hare->next->next;
	}

	hare = head;

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}

	return (tortoise);
}
