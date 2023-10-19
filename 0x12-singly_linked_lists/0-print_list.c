#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to get the lenght
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;
	if (s != NULL)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - it printes a linked lists.
 *@h: a pointer to the first node.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
