#include "main.h"
#include<string.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: a string to be scanned
 * @c: is the character to be searched in s
 * Return:a pointer to the first occurrence of the character c in the string s
 *		  or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (&s[i]);
		}
		s++;
	}
	return ('\0');
}
