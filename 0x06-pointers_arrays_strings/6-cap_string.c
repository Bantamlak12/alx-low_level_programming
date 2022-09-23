#include "main.h"
#include<string.h>
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: a string to be capitalized
 */
char *cap_string(char *str)
{
	int index;
	
	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
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
		if (str[index + 1] >= 'a' && str[index +1] <= 32)
			str[index + 1] = str[index + 1] - 32;
	}
	return (str);
}
