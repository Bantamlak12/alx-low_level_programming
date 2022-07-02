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

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
		return (0);
}
