#include "main.h"

/**
 * prime_check - checks for prime number
 * @a: factor
 * @p: prime number
 * Return: 1 if n is prime, and zero if it's not
 */

int prime_check(int a, int p)
{
	if (p < 2 || a % f == 0)
		return (0);
	else if (a > p / 2)
		return (1);
	else
		return (prime_check(a + 1, p));
}

/**
 * is_prime_number - a function that returns
 * 					1 if the input integer is a prime number
 *					otherwise return 0
 * @n: an integer
 * Return: 1 if n is prime number
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
