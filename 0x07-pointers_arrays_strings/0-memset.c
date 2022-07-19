#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to block of memory to fill
 * @b: the value to be set
 * @n: number of bytes to be set to the value
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value;

	value = b;
	for (i = 0; i = n; i++)
	{
		memory[i] = value;
	}
	return (memory);
}
