#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* array_range- creates an array from min to max
* @min: minimum number in array
* @max: maximum number in array
* Return: NULL if min > max, or if malloc fails
* Otherwise, return pointer to newly created array
*/

int *array_range(int min, int max)
{
int *array;
int i;

if (min > max)
return (NULL);

array = malloc(((max - min) + 1) * sizeof(int));

if (array == NULL)
return (NULL);

i = 0;
while (min <= max)
array[i++] = min++;

return (array);
}

