#include "lists.h"

/**
 * list_len - function returns the number of elements in a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
