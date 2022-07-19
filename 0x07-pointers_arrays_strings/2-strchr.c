#include "main.h"

/**
 * _strchr -
 * @s: a string to be scanned
 * @c: a character to be searched in s
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if (s[i] == c)
		{
			s = s +  i;
			return(s);
		}
	}

	return ('\0');
}
