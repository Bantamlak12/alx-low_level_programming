#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the lowercase alphabet in reverse, followed by a new line
 *Return: 0 on success
 */
int main(void)
{
	int i = 'z';

	for (i = 'z'; i >= 'a'; i--)

	putchar(i);
	putchar('\n');

	return (0);
}
