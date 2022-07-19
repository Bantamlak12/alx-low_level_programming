#include "main.h"
#include<string.h>

/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to be copied
 *Return: returns a pointer to the dest memory address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
