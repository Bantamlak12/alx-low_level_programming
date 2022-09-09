#include<stdio.h>
/**
 * main - a function that prints lowercase alphabets
 *
 * Return: Always (0) on success
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
