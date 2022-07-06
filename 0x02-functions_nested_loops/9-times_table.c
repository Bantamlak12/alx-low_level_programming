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
		putchar('0');
	for (i = 0; i <= 9; i++)
	{
		putchar(',');
		putchar(' ');

		result = i*n;
		if (result <= 9)
			putchar(' ')
		else
		putchar((result / 10) + '0');
		putchar((result % 10) + '0');
	}
	putchar('\n');
	}

}
