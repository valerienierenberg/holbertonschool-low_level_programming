/**
* print_numbers -  prints nums 0-9, and newline
* @void: number
*
* Description: prints 0-9, newline
* section header: Section description
* Return: returns int
*/

#include "holberton.h"

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	_putchar(i);
	}

_putchar('\n');
}
