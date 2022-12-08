#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint_t - prints all the elements of a dlistint_t list
 *
 * @h: a head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return count;
}
