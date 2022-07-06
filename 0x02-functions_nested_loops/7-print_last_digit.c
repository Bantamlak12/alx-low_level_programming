#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: a digit number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');

return (lastdigit);
}
