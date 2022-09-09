#include<stdio.h>
/**
 * main - prints lowercase alphabets followed by uppercase
 *
 * Return: Always (0) on success
 */
int main(void)
{
	char c, C;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (C = 65; C <= 90; C++)
		putchar(C);
	putchar('\n');

	return (0);
}
