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
* binary_search- searches for a value in a sorted array of integers using
* the Binary search algorithm
* @array: integer array
* @size: pointer to the first element of the integer array to search
* @value: value to search for
* Return: the index where value is located
* If value is not present in array or if array is NULL, function returns -1
*/

int binary_search(int *array, size_t size, int value)
{

	size_t l = 0;
	size_t r = size - 1;
	size_t m;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		pretty_print(l, r, array);
		m = l + (r - l) / 2;

		/* Check if x is present at mid */
		if (array[m] == value)
			return (m);

		/* If x greater, ignore left half */
		if (array[m] < value)
			l = m + 1;

		/* If x is smaller, ignore right half */
		else
			r = m - 1;
	}

	/* if we reach here, then element was not present */
	return (-1);
}
