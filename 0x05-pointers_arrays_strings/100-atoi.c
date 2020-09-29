#include "holberton.h"
#include <stdio.h>

/**
* _atoi - converts a string to an int
* @s : string
*
* Description: converts a string to an int
* Return: void
*/

int _atoi(char *s)
{
	int res;
	int i;

	res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i < 0)
		{
			i *= -1;
			_putchar('-');
		}

	res = res * 10 + s[i] - '0';
	}

	return (res);
}
