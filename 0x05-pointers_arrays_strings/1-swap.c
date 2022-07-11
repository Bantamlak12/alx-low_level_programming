#include "main.h"
/**
 * swap_int - a function that swaps the value of two integer
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
