/**
* _islower- checks for lowercase
* description: checks for lower case
* Return: 0 or 1
*/

#include "holberton.h"

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

		else
		{
		return (0);
		}
}
