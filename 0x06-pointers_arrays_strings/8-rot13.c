#include "holberton.h"
/**
 * rot13 - converts a string to rot13
 * @s: string
 *
 * Return: s
 */
char *rot13(char *s)
{
if (s != '\0')
{
int i;
for (i = 0; s[i]; i++)
{
if (s[i] >= 'a' && s[i] <= 'm')
{
s[i] += 13;
continue;
}
if (s[i] >= 'A' && s[i] <= 'M')
{
s[i] += 13;
continue;
}
if (s[i] >= 'n' && s[i] <= 'z')
{
s[i] -= 13;
continue;
}
if (s[i] >= 'N' && s[i] <= 'Z')
{
s[i] -= 13;
continue;
}
}
}
return (s);
}
