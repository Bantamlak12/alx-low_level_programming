#include<stdio.h>
#include<stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of arguments pass through command line
 * @argv: an array contain value of arguments
 * Return: 1 if one of the number contains symbols
 */

int main(int argc, char *argv[])
{
	int n, d, s;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d]; d++)
		{
			if (argv[n][d] == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[n]);
	}
	printf("%d\n", s);
	return (0);
}
