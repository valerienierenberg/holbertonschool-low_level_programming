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
		putchar((num % 10) + 0);
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
