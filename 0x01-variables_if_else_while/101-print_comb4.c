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
	int c;

	for (a = 0 ; a < 10 ; a++)
{
		for (b = a + 1; b < 10 ; b++)
		{
			for (c = b + 1; c < 10 ; c++)
		{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

			if (a == 1 && b == 0 && c == 2)
				continue;

			putchar(',');

			putchar(' ');
		}
}
}
		putchar('\n');

		return (0);
}
