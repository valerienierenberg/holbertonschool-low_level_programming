/**
* jack_bauer- prints every minute of day
* @void
* Return: void
*/

#include "holberton.h"

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 00; a <= 23; a++)
	{
		for (b = 00; b <= 59; b++)
		{
			_putchar(a / 10 % 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 % 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
