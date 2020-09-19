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

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{

			if (a == '8' && b == '9')
				continue;

			if (a == b)
				break;

				{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
				}
		}
	}

		putchar('\n');

return (0);
}

