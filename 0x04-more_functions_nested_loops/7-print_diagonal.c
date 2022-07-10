#include "main.h"
 
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of diagonal line
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			continue;
			}
		_putchar(' ');
		}
	_putchar('\n');
	}
}
