#include<stdio.h>
/**
 * main - a string that prints lowercase alphabets
 * Return: Always 0 on success
 **/
int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
