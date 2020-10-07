#include "holberton.h"
/**
* _print_rev_recursion - prints a string in reverse
* @s: string to be printed
* Return: void
*/


void _print_rev_recursion(char *s)
{

/* if we have reached the end of the string */
if (*s == '\0')
{
return;
}

/* recur for next character in the string */
_print_rev_recursion(s + 1);

/* print current character */
_putchar(*s);
}
