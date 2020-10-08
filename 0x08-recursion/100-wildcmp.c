#include "holberton.h"
/**
* wildcmp - compares two strings to see if identical
* (s2 can contain *, * can replace any string,
* including an empty string)
* @s1: string to compare
* @s2: string to compare
* Return: 1 if identical, otherwise 0
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1)) /* || wildcmp(s1 + 1, s2)) */
			return (1);
		if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
	}
	return (0);
}

