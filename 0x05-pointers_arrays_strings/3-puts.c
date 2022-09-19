#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while(*str)
		_putchar(*str++);
	_putchar('\n');
}
