/**
* print_times_table- prints n times table
* @int: prints 9 times table
* return: void
*/

#include "holberton.h"

void print_times_table(int n)
{
    int j, k;

	for (n = 0; n <= 15; n++)
	{
		_putchar('0');

		for (j = 1; j <= 15; j++)
		{

			_putchar(',');
			_putchar(' ');

			k = n * j;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');

		}
	_putchar('\n');
	}
}
