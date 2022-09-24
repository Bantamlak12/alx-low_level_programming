#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * str: a string to be encoded using rot13
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int index2, index1 = 0;
	char ch1[] = {'a', 'b', 'c', 'd','e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',  'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char ch2[] = {'n', 'o', 'p', 'q','r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	while (str[index1])
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (str[index1] == ch1[index2])
			{
				str[index1] = ch2[index2];
				break;
			}
		}
		index1++;
	}
	return (str);
}
