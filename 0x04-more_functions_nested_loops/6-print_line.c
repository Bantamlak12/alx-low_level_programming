#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: A length of a line
 */
void print_line(int n)
{
	int line;

	for (line = 0; line <= n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
