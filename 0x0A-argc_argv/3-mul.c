#include<stdio.h>
#include<stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: numbers passed through command line
 * @argv: array of character
 * Return: 1 if If the program does not receive two arguments
 *         0 on success
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);

	return (0);
}
