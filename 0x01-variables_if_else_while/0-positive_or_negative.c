#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - prints the outs as positive, negative, or zero
 *Return: Always 0 to success
 **/
int main(void)
{
	int n;
	printf("Enter a numner : ");
	scanf("%d", &n);
	if (n>0)
	{
		printf("%d is positive", n);
	}
	else if (n<0)
	{
		printf("%d is negative",n);
	}
	else
	{
		print("%d is zero", n);
	}
	
	return 0;
}
