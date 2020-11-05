#include "holberton.h"

/**
* clear_bit - Functio that sets the value of a bit to 0 at a given index.
* @index: index of bits to clear
* @n: int
* Return: 1 if it worked, -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask;

	if (index > 32)
		return (-1);

	mask = 1 << index;
	*n &= ~(mask);

return (1);
}

