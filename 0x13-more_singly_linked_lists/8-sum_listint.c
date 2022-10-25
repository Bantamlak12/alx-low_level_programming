#include "lists.h"

/**
 * sum_listint - sum nodes of listint_t list
 * @head: head pointer to the first node
 *
 * Return: the sum of the data of listint_t list
 *		   0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
