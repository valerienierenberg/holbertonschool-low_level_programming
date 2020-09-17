/**
* main- void
* description: prints combinations of single digit numbers
* Return: 0
*/

#include <stdio.h>

int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
