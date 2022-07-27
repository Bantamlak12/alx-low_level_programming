#include "main.h"
#include<stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: a dest string to be concatenated
 * @s2: a source string to be concatenated to
 * Return: a pointer to the concatenated string
 *		   NULL, if it's an empty string and if it's fails
 */
char *str_concat(char *s1, char *s2)
{
	int index, index2 = 0, size = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		size++;
	concat = malloc(sizeof(char) * size);

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[index2++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat[index2++] = s2[index];

	return (concat);
}
