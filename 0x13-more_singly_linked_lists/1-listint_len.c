#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @hi: head pointer points to node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *hi)
{
	int nodes = 0;

	while (hi != NULL)
	{
		nodes++;
		hi = hi->next;
	}
	return (nodes);
}
