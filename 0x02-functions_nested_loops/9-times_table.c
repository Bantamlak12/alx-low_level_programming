#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: Always 0.
 */
void times_table(void)
{
	int n, i, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
	for (i = 1; i <= 9; i++)
	{
		_putchar(',');
		_putchar(' ');

		result = i * n;
		if (result <= 9)
			_putchar(' ');
		else
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}

}
