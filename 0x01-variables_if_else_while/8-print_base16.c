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

	for (c = 'A' ; c <= 'E' ; c++)
	{
	putchar(c);
	}

	for (a = '0' ; a <= '9' ; a++)
	{
	putchar(a % 10 + '0');
	}
	{
	 putchar('\n');
	}

	return (0);
}