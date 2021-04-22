#include "search_algos.h"
#include <math.h>

/**
* exponential_search- searches for a value in a sorted array of ints using
* the Jump search algorithm
* (using the square root of the size of the array as the jump step.)
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located
* If value is not present in array or if array is NULL, function returns -1
*/
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
