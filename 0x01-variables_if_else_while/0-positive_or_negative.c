#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if an integer is positive, negative, or zero
 * Return: Always 0 0n success
 **/
int main(void)
{
	int n;
	scanf("%d",&n);
	if (n > 0)
	{
		printf("%d is positive\n ", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n ", n);
	}
	else
	{
		printf("%d is zero\n ", n);
	}
	return 0;
}
