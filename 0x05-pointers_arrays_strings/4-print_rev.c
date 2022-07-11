#include "main.h"
#include<string.h>

/**
 * print_rev - prints a string in reverse
 * @s: a string character
 */
 void print_rev(char *s)
{
	int length = 0;
	int index;

	while (s[index++])
		length++;

	for (index = length - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
