#include "holberton.h"

/**
* puts2 - prints every other char of a string to stdout
* @str: string
*
* Description: print every other char of a string
* Return: void
*/

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
