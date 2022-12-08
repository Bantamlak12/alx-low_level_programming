#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: The first node of the list
 * @index: index of the node
 * Return: the nth node of a dlistint_t
 *		   NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (index)
	{
		ptr = ptr->next;
		index--;
	}

	return (ptr);
}
