#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - compares the last digit of a random number
 *
 * Return: Always (0) on success
 */
int main(void)
{
	int n, la_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	la_digit = n % 10;

	if (la_digit >= 6)
		printf("Last digit of %d is %d and is greater than 5\n", n, la_digit);

	else if (la_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, la_digit);

	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, la_digit);

	return (0);
}
