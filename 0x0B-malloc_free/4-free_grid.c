#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *free_grid- frees a 2D array of ints
* @grid: 2D array of ints to be freed
* @height: height of grid
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
