#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 *		   0 if there is one or more chars in the string b that is not 0 or 1
 *		   0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i, convert = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			convert = (convert << 1) | 1;
		else
			convert <<= 1;
	}
	return (convert);
}
