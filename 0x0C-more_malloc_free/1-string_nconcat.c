#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* string_nconcat- concatenates two strings
* @s1: 1st string
* @s2: string to concatenate to s1
* @n: unsigned int
* Return: NULL if function fails. Otherwise,
* a pointer that points to a newly allocated space
* in memory that contains s1 followed by the first n bytes of
* s2, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *newstr;
unsigned int i = 0;
unsigned int j = 0;
unsigned int len1 = 0;
unsigned int len2orN = 0;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

while (s1[i] != '\0')
{
	len1++;
	i++;
}

while (s2[j] != '\0')
{
	len2orN++;
	j++;
}

if (len2orN > n)
	len2orN = n;

newstr = malloc(sizeof(char) * (len1 + len2orN + 1));

if (newstr == NULL)
	return (NULL);

for (i = 0; i < len1; i++)
	newstr[i] = s1[i];

for (j = 0; j < len2orN; j++, i++)
	newstr[i] = s2[j];

newstr[len1 + len2orN] = '\0';
	return (newstr);
}
