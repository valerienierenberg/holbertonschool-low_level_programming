/**
* print_fibonacci- prints fibonacci numbers
* @n: number
* Return:0
*/

#include <stdio.h>
#include "holberton.h"

int print_fibonacci(int n);
{
	int f1 = 0, f2 = 1, i, next;

	if (n < 1)

	return;

	for (i = 1; i <= n; i++)
	{
		printf("%d", f2);

	next = f1 + f2;

	f1 = f2;
	f2 = next;

	}

	return (0);
}
