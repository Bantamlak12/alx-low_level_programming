#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: head of the first node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = *head, *curr;

	if (*head != NULL)
	{
		prev = *head;
		curr = (*head)->next;
		*head = (*head)->next;

		prev->next = NULL;

		while (*head != NULL)
		{
			*head = (*head)->next;
			curr->next = prev;

			prev = curr;
			curr = *head;
		}
		*head = prev;
	}
	return (*head);
}
