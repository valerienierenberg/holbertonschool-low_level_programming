/**
* main- void
* description: prints 00 to 99
* Return: 0
*/

#include <stdio.h>

int main(void)

	int i

	for (int i = 0; i < 100 ; i++)
{

	putchar((i / 10) + '0');
}
{
	putchar((i % 10) + '0');
}
	putchar(',');
{
	putchar(' ');
}
	return (0);
}
