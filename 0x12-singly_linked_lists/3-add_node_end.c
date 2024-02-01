#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a list_t list.
 * @head: pointer to the address of the head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: the address of the new element,
 * Else, if an error occurs return NULL
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
