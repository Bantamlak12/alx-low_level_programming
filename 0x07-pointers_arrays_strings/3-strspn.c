#include "main.h"
#include <string.h>
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a pointer to char that contains a string to be scaned
 * @accept: a pointer to char that contains a byte to match
 * Return:  the number of bytes in the initial segment of s
 *			which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int counts = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				counts++;
				break;
			}
			if (accept[j + 1] == '\0')
				return (counts);
		}
	}
	return (counts);
}
