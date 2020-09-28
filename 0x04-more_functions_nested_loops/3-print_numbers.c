/**
* print_numbers -  prints nums 0-9, and newline
* 
*
* Description: prints 0-9, newline
* section header: Section description
* Return:void
*/

#include "holberton.h"

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);

_putchar('\n');
}
