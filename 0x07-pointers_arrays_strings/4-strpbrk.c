#include "main.h"
#include <string.h>

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *		   or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	while (s[j])
	{
		for (i = 0; accept[i] >= '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				return (s + j);
					break;
			}
		}
		j++;
	}
	return ('\0');
}
