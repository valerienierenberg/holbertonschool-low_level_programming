#include "holberton.h"

/**
* _strlen -  returns the length of a string
* @s: string
*
* Description: returns the length of a string
* Return:i
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
{
	return (i);
}
}
