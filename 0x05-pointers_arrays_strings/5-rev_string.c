#include "main.h"
#include<string.h>
/**
 * rev_string - a function that reverses a string
 *
 * @s: string
 */
void rev_string(char *s)
{
	int index, len = 0, len1 = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	len1 = len -  1;

	for (index = 0; index < len / 2; index++)
	{
		tmp = s[index];
		s[index] = s[len1];
		s[len1] = tmp;
		len -= 1;
	}
}
