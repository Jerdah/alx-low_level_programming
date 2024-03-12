#include "lists.h"

/**
 * print_listint - function prints the elements in a linked list
 * @h: pointer to the first node
 *
 * Return: the number of list elements
 */
size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (print_listint(h->next) + 1);
	}
	return (0);
}
