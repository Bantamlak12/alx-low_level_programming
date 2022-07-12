#include "main.h"
#include<string.h>

/**
 * rev_string - a function that reverse a string
 * @s: a string
 */
void rev_string(char *s)
{
	int index, len;
	char c;

	len = strlen(s);
	for (index = 0; index < len/2; len++)
	{
		c = s[index];
		s[index] = s[len-1-index];
		s[len - 1 - index] = s[index];
	}
	_putchar(s);
}
