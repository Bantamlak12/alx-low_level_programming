#include<stdio.h>
/**
 * main - prints a lowercase alphabet except 'q' and 'e'
 *
 * Return: Always (0) on success
 */
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		if (c != 'e' && c != 'q')
		putchar(c);
	putchar('\n');

	return (0);
}
