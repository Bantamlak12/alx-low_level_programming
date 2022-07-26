#include "main.h"
#include<stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 *  which is a duplicate of the string str
 *
 * @str: a string to be duplicated
 *
 * Return: NULL if is equal to NULL
 *         on success, pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;
	dup = malloc(sizeof(char) * size);
	if (dup == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
