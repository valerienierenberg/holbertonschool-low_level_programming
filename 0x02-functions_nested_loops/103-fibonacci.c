#include <stdio.h>
/**
* main - entry point
*
* Return:0
*/
int main(void)
{
	long num1, num2, fib, sum;

	for (num1 = 1, num2 = 2, fib = 0, sum = 2; num1 <= 4000000 && num2 <= 4000000;)
	{
	fib = num1 + num2;
		if (fib % 2 == 0)
		{
			sum = sum + fib;
		}
	num1 = num2;
	num2 = fib;

	}

	printf("%ld", sum);

putchar('\n');

return (0);

}
