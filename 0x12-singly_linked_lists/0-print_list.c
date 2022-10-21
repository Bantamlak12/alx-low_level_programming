#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: A node pointer to const list_t
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0, len = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		if (h->str != NULL)
		{
			len = strlen(h->str);
			printf("[%d] %s\n", len, h->str);
		}
		count++;

		h = h->next;
	}
	return (count);
}
