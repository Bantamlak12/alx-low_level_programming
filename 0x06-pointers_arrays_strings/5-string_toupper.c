#include "main.h"
#include<string.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: a string to be changed to upper
 * Return: changed uppercase string
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
	}
	return (str);
}
