/**
* more_numbers- void
* @void: number
* description: prints 0-14 ten times followed by newline
* return: void
*/

#include "holberton.h"

void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}

	_putchar('\n');
	}

}
