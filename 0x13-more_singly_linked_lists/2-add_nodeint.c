#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: a double head pointer to a struct listint_t
 * @n: a node data passed
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
