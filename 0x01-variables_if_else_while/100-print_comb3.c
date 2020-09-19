/**
* main- void
* description: prints 00 to 99, two digit combos
* Return: 0
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);

			if (a == '8' && b == '9')
			{
				putchar('\n');
			}

			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}


return (0);
}

