#include<stdio.h>
/**
 * main - pass number of argument
 * @argc: arguments passed through command line
 * @argv: unused array of character pointer
 * Return: Always (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
