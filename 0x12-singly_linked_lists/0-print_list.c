#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the start of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		nodes++;
	}

	return nodes;
}
