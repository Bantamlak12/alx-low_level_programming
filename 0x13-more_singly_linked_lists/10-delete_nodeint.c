#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 *							of a listint_t linked list
 * @head: head pointer
 * @index:  is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;
	unsigned int count = 0;

	if (*head  == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (count < (index - 1))
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	previous = current->next;
	current->next = previous->next;
	free(current);

	return (1);
}
