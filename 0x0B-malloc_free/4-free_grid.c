#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - free memory
 *@grid: muiti-dimentional array
 *@height: height of array
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
