/**
* print_alphabet_x10- void
* description: prints alphabet ten times followed by newline
* return: void
*/

#include "holberton.h"

void print_alphabet_x10(void)
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
