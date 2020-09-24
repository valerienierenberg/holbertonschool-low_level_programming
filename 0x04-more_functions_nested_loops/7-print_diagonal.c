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

	for (length = 0; length < n; length++)
	{
		if (n > 1)
		{
			for (space = 0; space < length; space++)
				{
				_putchar(' ');
				}
			_putchar('\\');
			_putchar('\n');
		}
	}
		if (n <= 0)
		{
		_putchar('\n');
		}
}
