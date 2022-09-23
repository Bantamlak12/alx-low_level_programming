#include "main.h"
#include<string.h>
/**
 * _strncpy - a function that copies two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied from source
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
