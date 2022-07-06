#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * Return: return 1 for success if not return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
