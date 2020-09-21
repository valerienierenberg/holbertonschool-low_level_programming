/**
* main- void
* description: prints Holberton
* Return: 0
*/

#include "holberton.h"

int main(void)
{
	char *b;
	int c;

	b = "Holberton";

	for (c = 0; c < 9; c++)
	{
	_putchar(b[c]);
	}

	_putchar('\n');


	return (0);
}
