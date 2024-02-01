#include "lists.h"

/**
 * add_node - function adds a new node at the beginning of a list_t list
 * @head: pointer to the address of the head of the list_t list
 * @str: string to be added to the list_t list
 *
 * Return: the address of the new element,
 * Else if an error occurs - NULL.
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
