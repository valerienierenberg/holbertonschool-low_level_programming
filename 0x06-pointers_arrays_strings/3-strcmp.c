#include "holberton.h"
/**
* _strcmp - compares two strings
* @s1: string 1
* @s2: string 2
*
* Return: difference between the two strings
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
