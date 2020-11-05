#include "holberton.h"

/**
* get_bit- Function that returns the value of a bit at a given index
* @n: number to get value of bit
* @index: index of bit
* Return: value of a bit at given index
*/

int get_bit(unsigned long int n, unsigned int index)
{

unsigned int i;

if (index > 32)
return (-1);

i = 1 << index;
i = i & n;
i = i >> index;

return (i);

}
