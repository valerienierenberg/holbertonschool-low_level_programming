#include "search_algos.h"
#include <math.h>

/**
* jump_search- searches for a value in a sorted array of integers using
* the Jump search algorithm
* (using the square root of the size of the array as the jump step.)
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the first index where value is located
* If value is not present in array or if array is NULL, function returns -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t m = sqrt(size);
	size_t x;

	while (array[m] <= value && m < size)
	{
		printf("Value checked array[%li] = [%li]\n",
			(long int)i, (long int)array[i]);
		i = m;
		m += sqrt(size);
		if (m > size - 1)
			return (-1);
	}

	for (x = i; x < m; x++)
	{
		if (array[x] == value)
			return (x);
	}
	return (-1);

}
