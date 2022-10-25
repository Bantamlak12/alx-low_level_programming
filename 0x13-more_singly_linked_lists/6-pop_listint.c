#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of listint_t list
 * @head: head node of the list
 *
 * Return: the head node data
 *		   if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	n = (temp->n);
	free(temp);
	temp = NULL;

	return (n);
	return ((*head)->n);
}
