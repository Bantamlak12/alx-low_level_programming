#include "main.h"
#include<string.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: char parameter
 * @src: char parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (index = 0; index < len2; index++)
	{
		dest[len1 + index] = src[index];
	}
	return (dest);
}
