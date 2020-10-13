#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* **alloc_grid- returns a pointer to a 2D array of ints
* with each element initialized to 0.
* @width: width of 2D array
* @height: height of the 2D array
* Return: if height or width is <= 0, return NULL.
* if malloc fails, return NULL.
* Otherwise, return a pointer to the 2D array of ints.
*/

int **alloc_grid(int width, int height)
{
	int **array2D;
	int height_i;
	int width_i;

	if (height <= 0 || width <= 0)
		return (NULL);

	array2D = malloc(sizeof(int *) * height);

	if (array2D == NULL)
		return (NULL);

	for (height_i = 0; height_i < height; height_i++)
	{
		array2D[height_i] = malloc(sizeof(int) * width);

		if (array2D[height_i] == NULL)
		{
			for (; height_i >= 0; height_i--)
				free(array2D[height_i]);

			free(array2D);
			return (NULL);
		}
	}

	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			array2D[height_i][width_i] = 0;
	}

return (array2D);
}
