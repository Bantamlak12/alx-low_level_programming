#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: The first node of the list
 * @n: the data of the node
 * Return: the address of the new element,
 *		   NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (*head);
}
