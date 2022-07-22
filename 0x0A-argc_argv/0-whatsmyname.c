#include<stdio.h>
/**
 * main - prints name of the program
 * @argc: count number of argument passed to the program
 * @argv: a pointer array
 * Return: 0 for int type function
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
