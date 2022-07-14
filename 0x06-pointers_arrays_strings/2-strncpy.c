#include "main.h"
#include<string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: pointer to the destination array
 *        where the content is to be copied.
 * @src: the string to be copied
 * @n: number of characters to be copied from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
