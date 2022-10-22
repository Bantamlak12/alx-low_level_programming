#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: A head pointer points to node
 * 
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while(h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
