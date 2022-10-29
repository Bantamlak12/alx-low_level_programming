#include "main.h"
#include <stdint.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: is the index, starting from 0 of the bit
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 63)
		return (-1);

	bit = *(int *)(n + (1 << index));

	return (bit);
}
