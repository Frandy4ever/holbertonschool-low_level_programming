/*
 * File: 4-free_grid.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-fimensional array of integer
 * @grid: The 2-dimentional array of integers to be freed
 * @height: The height of the grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
