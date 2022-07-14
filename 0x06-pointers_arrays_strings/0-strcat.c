#include "main.h"
#include<string.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: char parameter
 * @src: char parameter
 * @n: char parameter
 */

char *_strcat(char *dest, char *src)
{
	char dest[] = "Hello ";
	char src[] = "World";

	char *_strcat = strcat(dest, src);


	return (_strcat);
}
