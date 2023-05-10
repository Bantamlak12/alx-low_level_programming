#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - a function that searches for a value in a sorted array
 *					of integers using the Binary search
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the index where value is located, or
 *		    -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, i;
	size_t left = 0;
	size_t right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %d", array[i]);
			if (i < right)
				printf(",");
		}
		printf("\n");

		if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
		else
			return (mid);
	}

	return (-1);
}
