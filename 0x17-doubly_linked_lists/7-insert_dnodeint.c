#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: First node of the list
 * @idx: The index of the list where the new node should be added
 * @n: Data of the node
 * Return: The address of the node at index, or NULL if it failed
 *		   if it is not possible to add the new node at index idx,
 *		   do not add the new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2;
	dlistint_t *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp->next = new;
	temp->next->prev = new;
	new->prev = temp;
	new->next = temp->next;

	return (new);
}
