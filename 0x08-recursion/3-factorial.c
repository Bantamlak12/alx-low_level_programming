#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: a factorial number to be calculated
 * Return: -1 if n is lower than 0 to indicate an error
 *			1 if n is exactly equal to zero
 *			to a result of the factorial if it succeed
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
