#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 *			   created by your alloc_grid function
 * @grid: the address of the two dimensional grid
 * @height: height of grid
 * Return: Mothing.
 */
 void free_grid(int **grid, int height)
 {
	 int i;

	 for (i = 0; i < height; i++)
	 {
		 free(grid[i]);
	 }
	 free(grid);
 }
