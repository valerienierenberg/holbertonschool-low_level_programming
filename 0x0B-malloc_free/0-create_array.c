#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array- creates an array of chars and initializes it
* with a specific char
* @size: size of array
* @c: char
* Return: pointer to char
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	s[i] = '\0';

return (s);

}
