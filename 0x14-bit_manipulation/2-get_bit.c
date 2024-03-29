#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: a number to be returned its bit at given index
 * @index: is the index, starting from 0 of the bit
 *
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
