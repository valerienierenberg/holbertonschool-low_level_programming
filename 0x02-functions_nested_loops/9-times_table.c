/**
* times_table- prints 9 times table
* description: prints 9 times table
* return: void
*/

#include "holberton.h"

void times_table(void)
{
	int i;
	int a;

	for (i = '0'; i <= '9'; i++)
	{
	for (a = '0'; a <= '9'; a++)
	{
	_putchar(i * a);
	}
    }
}
