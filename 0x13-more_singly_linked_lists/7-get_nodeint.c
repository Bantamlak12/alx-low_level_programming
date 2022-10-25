#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth of a listint_t list
 * @head: head pointer to the node
 * @index: the nth index of the node
 *
 * Return: the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (current == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (count == index)
			return (current);
		count += 1;
		current = current->next;
	}
	return (0);
}
