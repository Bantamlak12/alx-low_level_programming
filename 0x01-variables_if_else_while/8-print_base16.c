#include<stdio.h>
/**
  * main - prints all numbers of base 16 in lowercase
  *
  * Return: Always (0) on success
  */
int main(void)
{
	int num, alph;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (alph = 97; alph <= 102; alph++)
		putchar(alph);
	putchar('\n');

	return (0);
}
