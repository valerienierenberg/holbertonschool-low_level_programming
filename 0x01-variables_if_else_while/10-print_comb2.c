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
			putchar(a);
			putchar(b);

			if (a == '9' && b == '9')
				continue;

			putchar(',');
			putchar(' ');
		}
	}

		putchar('\n');

return (0);
}
