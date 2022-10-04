#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 *				  and initializes it with a specific char
 * @size: size of memory to print
 * @c: a char to inittialize with
 * Return: NULL if size is equal to zero
 *		   a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (0);

	array = malloc(size * sizeof(char));

	if (size != 0)
	{
		if (array == NULL)
			return (NULL);
		if (size != '\0')
		{
			for (i = 0; i < size; i++)
			{
				array[i] = c;
			}
			return (array);
		}
	}
	return (0);
}
