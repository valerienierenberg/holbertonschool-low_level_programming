#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: interger array
 * @n: number of elements in array
 * Description: Function that reverses the content of an array of integers.
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int j = 0, k;

	n = n - 1;
	while (j < n)
	{
		k = *(a + j);
		*(a + j) = *(a + n);
		*(a + n) = k;
		j++;
		n--;
	}
}
