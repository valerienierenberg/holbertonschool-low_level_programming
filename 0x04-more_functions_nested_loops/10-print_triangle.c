/**
* print_triangle- prints triangle of # symbols
* @size: number
* description: prints a triangle on the terminal
* return:void
*/

#include "holberton.h"

void print_triangle(int size)
{
	int row;
	int col;

	for (row = 0; row <= size; row++)
	{
		for (col = 0; col < size; col++)
			{
			if ((col + row) < size)
				_putchar(' ');
			if ((col + row) >= size)
				_putchar('#');
	}
			_putchar('\n');
	}
		if (size <= 0)
		{
		_putchar('\n');
		}
}
