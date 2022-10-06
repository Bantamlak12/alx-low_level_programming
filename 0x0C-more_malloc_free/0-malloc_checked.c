#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return:Nothing.
 */

void *malloc_checked(unsigned int b)
{
	void *checked;

	checked = malloc(b);

	if (checked == NULL)
	{
		exit(98);
	}

	return (checked);
}
