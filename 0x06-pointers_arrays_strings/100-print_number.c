/**
* print_number- prints integer
* @n: any number
* Return: 0
*/

#include "holberton.h"

void print_number(int n)
{
	char a;
	int b;
	char c;

	if (n < 0)
	{
		_putchar('-');
		a = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		a = ((n % 10) + '0');
		n /= 10;
	}
	b = 0;
	while (n > 0)
	{
		b = b * 10 + (n % 10);
		n /= 10;
	}

	while (b > 0)
	{
		c = ((b % 10) + '0');
		_putchar(c);
		b /= 10;
	}
	_putchar(a);
}
