#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of a triangle
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (space = 1; space <= (size - i); space++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		if (i == size)
			continue;
		_putchar('\n');
	}
	}
	_putchar('\n');
}
