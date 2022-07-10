#include "main.h"
/**
 * print_number - prints an integer
 * @n: any integer number
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar(0);
		_putchar('\n');
	}
	else
	{
		_putchar('+');
		n = n;
		_putchar('\n');
	}
}
