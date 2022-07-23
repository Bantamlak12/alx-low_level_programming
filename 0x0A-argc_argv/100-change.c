#include<stdio.h>
#include<stdlib.h>

/**
 * main - a program that prints the minimum number of
 *       coins to make change for an amount of money
 * @argc: number of argument pass through command line
 * @argv: array of numbers
 * Return: 0 for success or 1 for failure
 */

int main(int argc, char *argv[])
{
	int i, c, d, n = 0;
	int s[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	c = atoi(argv[1]);
	if (c <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (i = 0; i <= 5; i++)
		{
			d = c / s[i];
			c -= d * s[i];
			n += d;
			if (n == 0)
				break;
		}
	}
	printf("%d\n", n);
	return (0);
}
