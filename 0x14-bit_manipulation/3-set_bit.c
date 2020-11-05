#include "holberton.h"

/**
* set_bit- Function that sets the value of a bit to 1 at a given index
* @n: pointer to bit o set value to 1
* @index: index of bit
*
* Return: 1 if it worked, -1 if error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{

unsigned int i;

if (index > 32)
return (-1);

i = 1 << index;
*n = *n | i;
return (1);

}
