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

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');

}
