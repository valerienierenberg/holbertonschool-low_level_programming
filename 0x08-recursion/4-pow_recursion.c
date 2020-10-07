#include "holberton.h"
/**
* _pow_recursion - returns the value of x raised to
* the power of y
* @x: integer
* @y: power to raise x to
* Return: int (x to the power of y)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x && y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

