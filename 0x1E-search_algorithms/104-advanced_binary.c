#include "search_algos.h"

/**
 * pretty_print- print array
 * @start: beginning index of array
 * @end: end of portion of array to print
 * @array: array to print
 * Return: void
*/
void pretty_print(int start, int end, int *array)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
			if (i != end)
				printf(", ");
	}
	printf("\n");
}


/**
* advanced_binary- searches for a value in a sorted array of integers using
* the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: the FIRST index where value is located
* Using recursion
* If value is not present in array or if array is NULL, function returns -1
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t mid = size / 2;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	if (array[mid] > value)
	{
		pretty_print(mid, size, array);
		return (advanced_binary(array, mid, value));
	}
	else if (array[mid] < value)
	{
		return (mid + advanced_binary(&array[mid], ((size + 1) / 2), value));
	}
	else
		pretty_print(mid, size, array);
		return (mid);
}
