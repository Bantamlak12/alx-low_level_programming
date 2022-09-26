#include "main.h"
#include<string.h>
/**
 * _memcpy -  a function that copies memory area
 * @dest: a memory area where a contents to be copied to
 * @src: a source of data to be copied to dest
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
