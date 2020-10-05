#include "holberton.h"
/**
* _strpbrk - searches a string for any set of bytes
* @s: string to be searched
* @accept: set of bytes to search for
*
* Return: pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j])
return (s + i);
}

return (0);
}
