/**
* print_triangle- prints triangle of # symbols
* @size: number
* description: prints a triangle on the terminal
* return:void
*/

#include "holberton.h"

void print_triangle(int size)
{
	int height;
	int width;

		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
			_putchar('#');
			}

		_putchar('\n');
		}
			if (size <= 0)
			{
			_putchar('\n');
			}
}