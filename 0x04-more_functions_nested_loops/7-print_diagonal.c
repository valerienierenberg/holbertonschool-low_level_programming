/**
* print_diagonal- prints diagonal line
* @n: number
* description: prints a diagonal line on the terminal
* return:void
*/

#include "holberton.h"

void print_diagonal(int n)
{
	int line;
	int space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)

			_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}

_putchar('\n');
}
