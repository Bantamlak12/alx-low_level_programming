#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: a string to be tested for its length
 * Return: length of a string if it succeed, or 0 if it fails
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
