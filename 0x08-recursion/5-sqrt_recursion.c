#include "main.h"

/**
 * sqrt_check - a function that checks for sqrt
 * @a: a natural number that help to find sqrt
 * @c: a variable to square root
 * Rerurn: a if a is sqrt to c
 *        -1 if n doesn't have a natural sqrt
 */

int sqrt_check(int a, int c)
{
	if (a * a == c)
		return (a);
	if (a * a > c)
		return (-1);
	return (sqrt_check(a + 1, c));
}

/**
 * _sqrt_recursion - a function that returns sqrt of a number
 * @n: a number
 * Return: -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
