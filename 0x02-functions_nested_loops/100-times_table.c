/**
* print_times_table- prints 9 times table
* @int: prints 9 times table
* return: void
*/

#include "holberton.h"

void print_times_table(int)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{

			_putchar(',');
			_putchar(' ');

			k = i * j;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');

		}
	_putchar('\n');
	}
}
