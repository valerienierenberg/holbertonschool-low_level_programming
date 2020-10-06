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
int i, j, t1, t2; /*i=rows, j=columns, t1=total1, t2=total2*/
t1 = 0;
t2 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
t1 += *((a + i * size) + j);
if (i + j == (size - 1))
t2 += *((a + i * size) + j);
}
}
printf("%d, %d\n", t1, t2);
