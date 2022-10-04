#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *			 in memory, which contains a copy of the string given as a parameter.
 * @str: a string to be copied
 * Return: NULL if str = NULL
 *		   On success, returns a pointer to the duplicated string
 *		   NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);
	len = strlen(str);

	dup = malloc(len * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);
}
