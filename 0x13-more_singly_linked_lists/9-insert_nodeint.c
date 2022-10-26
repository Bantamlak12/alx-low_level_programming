#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

int get_size(listint_t *head);

/**
 * get_size - returs size of the node
 * @head: a pointer to the head of the node
 *
 * Return: size of the node
 */

int get_size(listint_t *head)
{
	listint_t *temp = head;
	unsigned int size = 0;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a head pointer to the first node of the list
 * @idx: the index of the list where the new node should be added
 * @n: the data to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new;
	unsigned int size = get_size(*head);
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx > size)
		return (NULL);
	if (temp->next == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	while (temp != NULL)
	{
		count++;
		if (count == idx)
		{
			new->next = temp->next;
			temp->next = new;
		}
		temp = temp->next;
	}
	return (new);
}
