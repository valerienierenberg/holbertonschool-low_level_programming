/**
* _isdigit -  checks for digit
* @c: digit
*
* Description: Returns 1 if c is digit 0-9, else return 0
* section header: Section description
* Return: returns int
*/

#include "holberton.h"

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}

		else
		{
		return (0);
		}
}
