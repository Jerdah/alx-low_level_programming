#include "lists.h"

/**
 * add_nodeint - function adds an element at the beginning of a linked list
 * @head: pointer to a pointer to the first node
 * @n: element to add
 *
 * Return: NULL if memory allocation fails or head is NULL,
 * Else, return the address of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
