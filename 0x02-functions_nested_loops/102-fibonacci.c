/**
* main- prints fibonacci numbers
* @n: number
* Return:0
*/

#include <stdio.h>

int main(void)
{
	long int num1 = 0, num2 = 1, i, fib = 0;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld, ", num2);

		fib = num1 + num2;

		num1 = num2;
		num2 = fib;

	}

	return (0);
}
