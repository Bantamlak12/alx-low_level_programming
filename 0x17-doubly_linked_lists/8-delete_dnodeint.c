#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: the first node of the list
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succceeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp2;

	if (*head == NULL)
		return (-1);

	while (index > 0)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}

	if (temp == *head)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp2 = temp->prev;
		temp2->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp2;
	}

	free(temp);
	return (1);
}
