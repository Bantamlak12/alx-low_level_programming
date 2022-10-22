#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the node
 * @str: a string data to be copied
 * Return: address of node element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i, len1 = 0;
	char *dup;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		len1++;
	node->str = dup;
	node->len = len1;
	node->next = *head;
	*head = node;

	return (node);
}
