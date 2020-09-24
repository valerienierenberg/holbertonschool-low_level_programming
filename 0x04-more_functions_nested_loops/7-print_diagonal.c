/**
* print_diagonal- prints diagonal line
* @n: number
* description: prints a diagonal line on the terminal
* return:void
*/

#include "holberton.h"

void print_diagonal(int n)
{
	int length;
	int space;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)

			_putchar(' ');
			_putchar('\\');

			if (length == n - 1)
				continue;

			_putchar('\n');
		}
	}

_putchar('\n');
}
