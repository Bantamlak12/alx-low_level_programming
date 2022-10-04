#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: a destination string
 * @s2: a source string to be appended to destination
 * Return: a pointer to a newly allocated space in memory
 *		   NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + strlen(s2) + 1;

	concat = malloc(len * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[j++] = s2[i];

	return (concat);
}
