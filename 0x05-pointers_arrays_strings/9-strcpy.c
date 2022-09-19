#include "main.h"
/**
 * _strcpy - a function that copies the string pointed
 * to by src, including the terminating null byte (\0)
 * to the buffer pointed to by dest
 *
 * @dest: a buffer to copy the string to
 * @src: source string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
