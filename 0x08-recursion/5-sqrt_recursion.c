#include "holberton.h"
/**
* check_sqrt - checks for square root of c
* @a: guess at square root
* @c: number to find sqaure root of
* Return: square root of c or -1 if none
*/
int check_sqrt(int a, int c)
{
	if (a * a == c)
		return (a);
	if (a * a > c)
		return (-1);
	return (check_sqrt(a + 1, c));
}

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
		return (check_sqrt(1, n));
}

