/**
* _isalpha- checks for alphabetic characters
* description: alpha characters
* Return: 1 if a letter, 0 otherwise
*/

#include "holberton.h"

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}

		else
		{
		return (0);
		}
}
