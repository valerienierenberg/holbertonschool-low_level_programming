/**
* more_numbers- void
* @void: number
* description: prints 0-14 ten times followed by newline
* return: void
*/

#include "holberton.h"

void more_numbers(void)
{
	int num;
	int row;

	for (row = 0; row <= 9; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
		}
	_putchar('\n');
	}
}
