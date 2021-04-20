#include "search_algos.h"
#include <math.h>

/**
* interpolation_search- searches for a value in a sorted array of ints using
* the Jump search algorithm
* (using the square root of the size of the array as the jump step.)
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located
* If value is not present in array or if array is NULL, function returns -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
}
