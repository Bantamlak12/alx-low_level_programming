#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: a string to be encoded into 1337
 * Return: a pointer to encoded string
 */
char *leet(char *str)
{
	char ch[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {4, 3, 0, 7, 1};
	int index;
	char *ptr = str;

	while (*str)
	{
		for (index = 0; index <= 5; index++)
		{
			if (*str == ch[index] || *str == ch[index] - 32)
				*str = num[index] + '0';
		}
		str++;
	}
	return (ptr);
}
