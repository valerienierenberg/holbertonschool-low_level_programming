#include "holberton.h"
#include <stdio.h>

/**
* rev_string - converts a string to an int
* @s: string
*
* Description: converts string to int
* Return: int
*/

int _atoi(char *s)
{
    int digit;
    int j = 1;
    int m = 0;

    for (int i = strlen(s) -1; i >= 0; i--)
    {
        digit = s[i];
        digit = digit - 48;
        m = m + (digit * j);
        j = j * 10;
    }
    return (m);
}