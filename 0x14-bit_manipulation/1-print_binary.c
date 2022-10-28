#include "main.h"

/**
 * print_binary - prints binary reresentation of a number
 * @n: a number to be represent in binary
 */

void print_binary(unsigned long int n)
{
	int num;

	if (n > 1)
		print_binary(n >> 1);

	num = (n & 1) + '0';

	_putchar(num);
}
