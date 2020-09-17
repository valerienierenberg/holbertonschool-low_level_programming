/**
* main- void
* description: print numbers of base 16 in lowercase
* Return: 0
*/

#include <stdio.h>

int main(void)
{
	int a;
	char c;

	for (a = 0 ; a < 10 ; a++)
	{
	putchar((a % 10) + '0');
	}

	for (c = 'a' ; c <= 'f' ; c++)
	{
	putchar(c);
	}

	{
	 putchar('\n');
	}

	return (0);
}
