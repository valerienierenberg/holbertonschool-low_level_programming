/**
* main- prints 1-100, multiples of 3 print Fizz
* Multiples of 5 print Buzz, mult of 3 and 5 print fizzbuzz
* @void: number
* description: prints a line on the terminal
* Return:0
*/

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz");
		}

		if (num % 5 == 0)
		{
			printf("Buzz");
		}

		if ((num % 3 != 0) && (num % 5 != 0))
		{
			printf("%d", num);
		}
		if (num != 100)

			printf(" ");
	}

	putchar('\n');
	return (0);
}
