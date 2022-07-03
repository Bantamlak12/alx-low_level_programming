#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - a program that prints the alphabt in lowercase, followed by a new line
 *Return: Always 0 on success
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	if ((ch ! = 'e') && (ch ! ='q'))
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
