#include "main.h"
/**
 * check_sqrt - a function that returns the natural square root of a number
 * @i: initializing with 1
 * @sqrt: a parameter passed from _sqrt_recursion function
 * Return: -1 if 'sqrt' function does not have a natural square root
 */
int check_sqrt(int i, int sqrt)
{
	if (i * i == sqrt)
		return (i);
	if (i * i > sqrt)
		return (-1);
	return (check_sqrt(i + 1, sqrt));
}
/**
 * _sqrt_recursion - passes the parameters for check_sqrt function
 * @n :a square root number to be find
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (check_sqrt(1, n));
}
