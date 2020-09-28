#include "holberton.h"

/**
* rev_string - reverses a string
* @s: string
*
* Description: reverses a string
* Return: void
*/

void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
		i++;

	i--;

	for (j = 0; j <= i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
