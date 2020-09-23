/**
* main- prints fibonacci numbers
* @n: number
* Return:0
*/

#include <stdio.h>

int main(void)
{
	long int f1 = 0, f2 = 1, i, next = 0;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld, ", f2);

		next = f1 + f2;

		f1 = f2;
		f2 = next;

	}

	return (0);
}
