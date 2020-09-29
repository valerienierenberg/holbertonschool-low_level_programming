#include "holberton.h"

/**
* puts_half - prints second half of a string
* @str: string
*
* Description: prints 2nd half of a string
* Return: void
*/

void puts_half(char *str)
{
    int i;

    i = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        ;
    }

    if (i % 2 != 0)
    {
        i = i + 1;
    }

    for (i /= 2; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');

}
