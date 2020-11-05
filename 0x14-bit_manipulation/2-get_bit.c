#include "holberton.h"

/**
* print_binary- Function that prints the binary representation of a number
* @n: number to convert to binary
* 
* Return: void
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
