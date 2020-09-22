#include "holberton.h"

/**
* print_last_digit- prints last digit of number
* @r: any number
* Return:a
*/

int print_last_digit(int r)
{
	int a = r % 10;

	if (a < 0)
		a *= -1;

	_putchar(a + '0');

	return (a);
}
