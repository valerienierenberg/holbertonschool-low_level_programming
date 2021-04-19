#include "search_algos.h"

/**
* linear_search- adds a new node at the beginning of a listint_t list
* @array: integer array
* @size: pointer to the first element of the integer array to search
* @value: value to search for
* Return: the first index where value is located
* If value is not present in array or if array is NULL, function returns -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%li]\n",
			(long int)i, (long int)array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
