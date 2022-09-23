#include "main.h"
#include<string.h>
/**
 * _strcmp - a function that compare two strings
 * @s1: string one to be compared
 * @s2: string two to be compared
 * Return: 0 if s1, and s2 contain the same string
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);

	return (result);
}
