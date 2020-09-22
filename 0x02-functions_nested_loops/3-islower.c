/**
* _islower -  checks for lowercase character.
* @c: lowercase a-z
*
* Description: Returns 1 if c is lowercase, else 0
* section header: Section description
* Return: returns int
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
