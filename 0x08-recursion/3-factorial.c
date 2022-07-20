#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: a numberi
 * Return: -1 if n is less than 0
 *          1 if n is equal to zero
 *          ,and return factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
