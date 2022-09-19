#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: a string pointer to char
 */
void print_rev(char *s)
{
	int index, len = 0;

	while (s[len] != '\0')
		len++;
	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
