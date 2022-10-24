#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list
 * @head: head of the node
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
