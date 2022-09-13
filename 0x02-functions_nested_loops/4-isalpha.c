#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: the alphabetic character to be checked
 *
 * Return: 1 if (c) is a letter
 *         0, otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 91))
		return (1);
	else
		return (0);
}
