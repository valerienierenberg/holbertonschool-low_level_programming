#include "holberton.h"
#include <stdio.h>

/**
* print_array - print n elements of an array of ints
* @a : int
* @n : int
* Description: print n elements of an array of ints
* Return: void
*/

int _atoi(char *s)
{
    int res;
    int i;
    res = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (i < 0)
        {
            i *= -1;
            _putchar('-');
        }

    res = res * 10 + s[i] - '0';
    }

    return res;

}