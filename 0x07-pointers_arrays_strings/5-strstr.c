#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: a string to be scanned
 * @needle: a string to be searched within haystack string
 * Return: a pointer to the beginning of the located substring,
 *		   or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
