#include "main.h"
#include<string.h>
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: a pointer to an integer
 * @n: is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = 0; index <= n / 2; index++)
	{
		tmp = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = tmp;
	}
}
