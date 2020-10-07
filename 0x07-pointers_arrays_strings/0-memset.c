#include "holberton.h"

/**
* _memset - Function that fills memory with a constant byte.
* @s: pointer to memory area to be filled.
* @b: character to fill memory area.
* @n: number of bytes to be filled.
* Return: A pointer to the filled memory area @s.
*/

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i; /* changed to unsigned int bc it must be same as n */

    for (i = 0; i < n; i++)
    {
    *(s + i) = b; /* s (NOT *s) is address pointer is pointing to */
    }   /* *(s + i) shifts memory over 1 each time i is incremented */
return (s);
}
/*
* Original code below works for checker as well
* char *p = s;
*
* while (n > 0)
* {
* *p = b;
* p++;
* n--;
* }
* return (s);
*/
