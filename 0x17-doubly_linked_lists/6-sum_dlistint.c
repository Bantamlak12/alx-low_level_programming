#include "lists.h"

/**
 * sum_dlistint - sum all the data(n) of a dlistint_t linked list
 * @head: First node of the list
 * Return: sum of all the data of the list
 *		   0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head != NULL)
	{
		ptr = head;
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
		return (sum);
	}
	else
		return (0);
}
