#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int h, v;
	int product;

	for (v = 0; v <= 9; v++)
	{
		_putchar('0');

		for (h = 1; h <= 9; h++)
		{
			product = v * h;
			_putchar(',');
			_putchar(' ');
			if (product <= 9)
				_putchar(' ');
			else
			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
	_putchar('\n');
	}
}
