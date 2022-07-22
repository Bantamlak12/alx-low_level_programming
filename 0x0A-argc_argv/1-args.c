#include<stdio.h>
/**
 * main - pass number of argument
 * @argc: arguments passed through command line
 * @argv: unused array of character pointer
 * @n: a variable to pass integer value
 * Return: Always (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int c;

	c = argc - 1;
	printf("%d\n", c);

	return (0);
}
