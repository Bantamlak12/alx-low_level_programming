#include<stdio.h>
#include<stdlib.h>
/**
 *main - prints out all single digits of base 10
 *Return: Always 0 on success
 **/
int main(void)
{
	int i = '0';
	for (i = '0'; i <='9'; i++)

		printf("%s \n", &i);

	return (0);
}
