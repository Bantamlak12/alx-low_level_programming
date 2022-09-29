#include "main.h"
/**
 * check_prime - checks for prime
 * @i: a natural number starting from 2
 * @num: a number to be checked if it's prime
 * Return: 0 if the number is not prime
 *		   1 if the number is prime
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
 * @n: a number to be checked if it's prime
 * Return: 0 if n is less two, and call check_prime function
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(2, n));
}
