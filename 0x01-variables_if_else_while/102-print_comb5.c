/**
* main- void
* description: prints combos of two two-digit numbers
* Return: 0
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;

	for (a = 00; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) % 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar((b / 10 % 10 + '0');
			putchar(b % 10 + '0');
		}
			if (a == 98 && b == 99)
			{
			putchar('\n');
			}

			else
			{
			putchar(',');
			putchar(' ');
			}
	}

return (0);
}
