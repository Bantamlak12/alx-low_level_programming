#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: a string to be capitalized
 * Return: the result
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		if (str[index] == ' ' ||
				str[index] == '\t' ||
				str[index] == '\n' ||
				str[index] == ',' ||
				str[index] == ';' ||
				str[index] == '.' ||
				str[index] == '!' ||
				str[index] == '?' ||
				str[index] == '"' ||
				str[index] == '(' ||
				str[index] == ')' ||
				str[index] == '{' ||
				str[index] == '}')
		if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
		{
			str[index + 1] = str[index + 1] - 32;
		}
		index++;
	}
	return (str);
}
