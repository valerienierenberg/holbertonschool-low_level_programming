#include "holberton.h"
/**
 * rot13 - converts a string to rot13
 * @s: string
 *
 * Return: s
 */
char *rot13(char *s)
{
int i, j;
char orig[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char result[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i]; i++)
{
	for (j = 0; j < 52; j++)
	{
		if (orig[j] == s[i])
		{
			s[i] = result[j];
			break;
		}
	}
}
return (s);
}
