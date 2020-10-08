#include "holberton.h"
/**
* is_palindrome - checks for palindrome 
* (empty string is palindrome)
* @s: string to check
* Return: 1 if palindrome, otherwise 0
*/
int is_palindrome(char *s)
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
