#include "main.h"
/**
 *
 *
 */
int check_prime(int i, int num)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (check_prime(i + 1, num));
}
/**
 * is_prime_number - checks for prime number
 * @n:
 * Return:
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(2, n));
}
