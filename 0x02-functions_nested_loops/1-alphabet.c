/**
* print_alphabet- void
* description: prints alphabet followed by newline
* return: 0
*/

#include "holberton.h"

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}

_putchar('\n');

}
