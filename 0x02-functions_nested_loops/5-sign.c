/**
* print_sign- prints the sign of a number
* @n: number
* Return: 0, 1, or -1
*/

#include "holberton.h"

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}

	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}

	else
	{
	_putchar('0');
	return (0);
	}

}
