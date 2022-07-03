#include <stdio.h>
#include <stdlib.h>
/**
 *main - a string that prints all single digit numbers of base 10
 *Return: 0 on success
 */
int main(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	putchar('\n');

	return (0);
}
