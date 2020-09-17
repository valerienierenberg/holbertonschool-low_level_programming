/**
* main- void
* description: print 0-9, using putchar, but not char type
* Return: 0
*/

#include <stdio.h>

int main(void)

{
	int a;

	for (a = 0 ; a < 10 ; a++)

		putchar(a % 10 + '0');

	putchar('\n');

	return (0);
}
