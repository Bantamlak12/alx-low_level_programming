#include "main.h"
#include<string.h>

/**
 * _strcmp - a function that compares two functions
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: Always (0)
 */

int _strcmp(char *s1, char *s2)
{
	int ret;

	ret = strcmp(s1, s2);
	if (ret < 0)
	{
		return ('-');
	}
	else if (ret > 0)
	{
		return ('+');
	}
	else
		return ('0');
}
