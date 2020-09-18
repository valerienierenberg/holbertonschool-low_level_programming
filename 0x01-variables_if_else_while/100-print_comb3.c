/**
* main- void
* description- prints combos of two digits, not repeating digit combos
* Return: 0
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;

	for (a = 0 ; a < 9 ; a++)
{
		for (a = b + 1; b < 10 ; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 8 && b == 9)
				continue;

			putchar(',');

			putchar(' ');
		}
}
		putchar('\n');

		return (0);
}
