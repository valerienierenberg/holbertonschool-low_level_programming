#include <stdio.h>
#include "holberton.h"
/**
* print_diagsums - prints sum of two diagonals of a
* square matrix of integers
* @a: 2D array
* @size: size of array
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i, j, k, l, m;
l = 0;
m = 0;
for (i = 0; i < size; i++)
{
k = (i * size) + i;
l += *(a + k);
}
for (j = 0; j < size; j++)
{
k = (j * size) + (size - 1 - j);
m += *(a + k);
}
printf("%i, %i\n", l, m);
}
