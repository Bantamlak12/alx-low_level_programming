#include<stdio.h>
#include<string.h>
/**
 *main - prints alphabets in lower and upper case
 *Return: 0 on success
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		putchar('\n');
	}
	while (A <= 'Z')
	{
		putchar(A);
	}
	return (0);
}
