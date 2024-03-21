#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted, starting from 0.
 *
 * Return: 1 on Success,
 * Else, return -1 on Fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index)
		{
			if (current->next != NULL)
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}
			else
			{
				current->prev->next = NULL;
			}
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
