/**
* main- void
* description: print a-z, then A-Z
* Return: 0
*/

#include <stdio.h>

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
	putchar(c);
	}

	for (c = 'A' ; c <= 'Z' ; c++)
	{
	putchar(c);
	}
	{
	 putchar('\n');
	}

	return (0);
}
