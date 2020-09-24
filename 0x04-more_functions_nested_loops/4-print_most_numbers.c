/**
* print_most_numbers -  prints nums 0-9,
* except 2 and 4, and newline
* @void: number
*
* Description: prints 0-9, except 2 and 4, newline
* section header: Section description
* Return: return void
*/

#include "holberton.h"

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	if (i != '2' && i != '4')
	_putchar(i);
	}
_putchar('\n');
}
