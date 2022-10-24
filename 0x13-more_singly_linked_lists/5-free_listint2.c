#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: head node
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head, *temp;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
