#include "main.h"
#include<string.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: a destination string
 * @src: a source string
 * @n: characters from source string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
