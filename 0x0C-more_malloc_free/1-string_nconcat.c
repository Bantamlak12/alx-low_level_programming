#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: destination string
 * @s2: a string to be appended
 * @n: number of bytes to be appended to s1
 * Return: if the function fails, it should return NULL
 *		   On success, a pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, len = 0;
	char *nconcat;

	if (s1 == NULL)
		return "";
	if (s2 == NULL)
		return "";

	len = strlen(s1) + n + 1;

	nconcat = malloc(sizeof(char) * len);

	if (nconcat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		nconcat[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		nconcat[j++] = s2[i];
	nconcat[j] = '\0';

	return (nconcat);
}
