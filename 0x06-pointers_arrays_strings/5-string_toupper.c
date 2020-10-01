#include "holberton.h"

/**
 * string_toupper - changes a string to uppercase
 * @s: string
 *
 * Description: Function that reverses the content of an array of integers.
 * Return: void
 *
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	}
return (s);
}
