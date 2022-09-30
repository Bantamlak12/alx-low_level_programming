#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of argument passed
 * @argv:a pointer array that points to each argument passed
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
