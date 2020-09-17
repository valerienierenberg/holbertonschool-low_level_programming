/**
* main- void
* description: prints 00 to 99
* Return: 0
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;

	for (a = 0 ; a < 10 ; a++)
{
		for (b = 0; b < 100 ; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 9 && b == 9)
				continue;

			putchar(',');

			putchar(' ');
		}
}
		putchar('\n');
		return (0);
}
