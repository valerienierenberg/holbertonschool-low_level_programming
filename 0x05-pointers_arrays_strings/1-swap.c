#include "holberton.h"

/**
* swap_int -  swaps the values of two ints
* @a: number 1
* @b: number 2
*
* Description: swaps the values of two ints
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
