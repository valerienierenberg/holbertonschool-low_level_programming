#include "holberton.h"
/**
* _strlen - return length of string
* @str: string to find length of
*
* Return: length of str
*/
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}
/**
* check_palindrome - checks to see if a
* string is a palindrome
* @left: left hand index
* @right: right hand index
* @p: possible palindrome
* Return: 1 if palindrome, 0 if not
*/
int check_palindrome(int left, int right, char *p)
{
if (left >= right)
return (1);

else if (p[left] != p[right])
return (0);
else
return (check_palindrome(left + 1, right - 1, p));
}
/**
* is_palindrome - checks for palindrome
* (empty string is palindrome)
* @s: string to check
* Return: 1 if palindrome, otherwise 0
*/
int is_palindrome(char *s)
{
int i;
return (check_palindrome(0, (_strlen(s) - 1), s));
}
