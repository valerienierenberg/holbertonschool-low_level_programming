#include "holberton.h"
/**
* _memset - Fills the first @n bytes of the memory area
*          pointed to by @s with the constant byte @b.
* Fills memory with a constant byte.
* @s: A pointer to the memory area to be filled.
* @b: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;  /* set pointer p to value s */

while (n > 0)  /* while the number of bytes to
* be filled in memory is more than 0
*/
{
*p = b;  /* dereference pointer (set value at p to b) */
p++;    /* increment value at p (incrementing b??)*/
n--;   /* decrement number of bytes to be filled */
}
return (s); /* return pointer to memory area s */
}
