#include "main.h"
#include<string.h>

/**
 * rev_string - a function that reverse a string
 * @s: a string
 */
void rev_string(char *s)
{
	int index, len = 0, len2 = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	len2 = len - 1;

	for (index = 0; index < len / 2; index++)
	{
		tmp = s[index];
		s[index] = s[len2];
		s[len2] = tmp;
		len2 -= 1;
	}

}
