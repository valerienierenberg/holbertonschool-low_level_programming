/**
* print_to_98- prints to 98
* @n: number
* Return:n
*/

#include <stdio.h>
#include "holberton.h"

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}


	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
