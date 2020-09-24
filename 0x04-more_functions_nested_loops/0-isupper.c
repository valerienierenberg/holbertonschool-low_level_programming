/**
* _isupper -  checks for uppercase character.
* @c: letter
*
* Description: Returns 1 if c is uppercase, else 0
* section header: Section description
* Return: returns int
*/

#include "holberton.h"

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

		else
		{
		return (0);
		}
}
