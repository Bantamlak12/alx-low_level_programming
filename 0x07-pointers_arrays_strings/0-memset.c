#include "main.h"
#include<string.h>
/**
 * _memset - a function that fills memory with a constant n byte
 * @s: a block of memory to be filled with constant byte b
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
