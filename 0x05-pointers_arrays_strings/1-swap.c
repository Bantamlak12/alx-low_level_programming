#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 *
 * @a: a value to be swaped
 * @b: a  value to be swaped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
