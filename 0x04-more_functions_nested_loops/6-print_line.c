/**
* print_line- void
* @n: number
* description: prints a line on the terminal
* return:void
*/

#include "holberton.h"

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');

}
