#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* _strlen- returns the length of a given string
* @s: string to find length of
* Return: length of string
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* string_nconcat- allocates memory using malloc
* @s1: 1st string
* @s2: string to concatenate to s1
* @n: unsigned int
* Return: NULL if function fails. Otherwise,
* a pointer that points to a newly allocated space
* in memory taht contains s1 followed by the first n bytes of
* s2, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *newstr;
unsigned int i, j;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if ((int) n > _strlen(s2))
n = _strlen(s2);

newstr = malloc(_strlen(s1) + n + 1);

if (newstr == NULL)
	return (NULL);

for (i = 0, j = 0; s1[i]; i++, j++)
	newstr[j] = s1[i];

for (i = 0; i != n; i++, j++)
	newstr[j] = s2[i];

newstr[j] = '\0';

return (newstr);
}

