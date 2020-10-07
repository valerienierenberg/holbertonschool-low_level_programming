#include "holberton.h"
/**
* check_prime - checks if number is prime
* @f: factor
* @i: number to check for prime possibility
* Return: 1 if prime, otherwise 0
*/
int check_prime(int f, int i)
{
if (i < 2 || i % f == 0)
	return (0);
else if (f > i / 2)
	return (1);
else
	return (check_prime(f + 1, i));
}

/**
* is_prime_number - returns 1 if n is prime
* @n: number to check if prime
* Return: 1 if n is prime, otherwise 0
*/
int is_prime_number(int n)
{
/* Base case */
if (n == 2)
	return (1);
	return (check_prime(2, n));
}

