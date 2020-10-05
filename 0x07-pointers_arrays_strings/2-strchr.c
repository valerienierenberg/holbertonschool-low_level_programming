#include "holberton.h"
/**
* _strchr - locates a character in a string
* @s: string to search through for char c
* @c: character to search for
*
* Return: A pointer to the first
* occurrence of the char c in the string s, or NULL
* if char is not found
*/
char *_strchr(char *s, char c)
{
for (; ; s++)
{
	if (*s == c)
		return (s);
	if (!*s)
		return ("NULL");
}
return ("NULL");
}
