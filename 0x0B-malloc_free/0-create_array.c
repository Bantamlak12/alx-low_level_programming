#include "main.h"
#include<stdlib.h>
/**
 * create_array - array of character
 * @size: the size of the array to be initialized with
 * @c: The character to initialize the array
 * Return: NULL if size is equal to zero or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; ++i)
	{
		ptr[i] = c;
	}

return (ptr);
}
