#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Return: returns 1 if c is a letter, lowercase or uppercase if not return 0
 * @c: The character to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
