#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: The first node of the list
 * @n: data of the node
 * Return: the address of the new element,
 *		   or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *end_node = malloc(sizeof(dlistint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->prev = NULL;
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		end_node->next = NULL;
		*head = end_node;

		return (*head);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = end_node;
	end_node->prev = ptr;

	return (*head);
}
