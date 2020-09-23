#include <stdio.h>
/**
* main - entry point
*
* Return:0
*/

int main(void)
{
	int count;
	unsigned long num1, num2, fib;

	for (count = 0, num1 = 1, num2 = 2, fib = 0; count <= 96; count++)
	{
		if (count == 0)
		{
			printf("%lu, %lu, ", num1, num2);
		}
		else
		{
			if (count < 96)
			{
				printf("%lu", fib);
			}
			else
			{
				printf("%lu", fib);
			}
		}

		fib = num1 + num2;
		num1 = num2;
	}

	printf("\n");
return(0);
}
