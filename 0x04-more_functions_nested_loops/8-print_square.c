/**
* print_square- prints square of # symbols
* @size: number
* description: prints a square on the terminal
* return:void
*/

#include "holberton.h"

void print_square(int size)
{
	int height;
	int width;

	if (size > 0)
	{

		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
			_putchar('#');
			}

		_putchar('\n');

			if (size <= 0)
			{
			_putchar('\n');
			}
		}
	}
}
