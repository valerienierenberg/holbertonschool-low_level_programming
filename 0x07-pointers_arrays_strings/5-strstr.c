#include "holberton.h"
/**
* _strstr - finds a substring within a string.
* @haystack: string to be searched for substring
* @needle: substring to search for within haystack
*
* Return: pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;

while (haystack[i])
{
while (needle[j] && (haystack[i] == needle[0]))
{
if (haystack[i + j] == needle[j])
j++;
else
break;
}
if (needle[j])
{
i++;
j = 0;
}
else
return (haystack + i);
}
return (0);
}
