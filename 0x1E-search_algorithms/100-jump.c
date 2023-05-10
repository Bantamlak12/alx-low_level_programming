#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - a function that searches for a value in a sorted array
 *				 of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located, or
 *		   -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, i;
	size_t jump_step = sqrt(size);

	if (array == NULL)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[jump_step] <= value && jump_step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", jump_step, array[jump_step]);
		start = jump_step;
		jump_step += sqrt(size);
		if (jump_step > size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", start, jump_step);
			jump_step = size;
		}
	}
	if (jump_step < size)
		printf("Value found between indexes [%ld] and [%ld]\n", start, jump_step);

	for (i = start; i < jump_step; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
