#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *argstostr- concatenates all arguments of program
* @ac: number of args
* @av: array of arguments
* Return: NULL if ac == 0 or av == NULL
* NULL also if function fails
* Otherwise returns a pointer to a new string
*/

char *argstostr(int ac, char **av)
{
char *ptr;
int i, j;
int buffer = 0;
int len = 0;

if (ac == 0)
return (NULL);

if (av == NULL)
return (NULL);

for (i = 0; av[i]; i++)

	for (j = 0; av[i][j]; j++)
		len++;                  /* gets length of every char in arguments */

ptr = (char *)malloc(len * sizeof(char) + ac + 1);
if (!ptr)
	return (NULL);


for (i = 0; av[i]; i++)
{
	for (j = 0; av[i][j]; j++, buffer++)
		ptr[buffer] = av[i][j];

	ptr[buffer] = '\n';
		buffer++;
}
ptr[buffer] = '\0';
return (ptr);
}
