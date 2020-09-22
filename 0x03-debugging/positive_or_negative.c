#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "holberton.h"

/**
* positive_or_negative- tells whether num is pos. or neg.
* @i: Prints whether variable n is pos or neg
* Return: 0
*/

void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
{
		printf("%d is positive\n", i);
	} else if (i < 0)
{
		printf("%d is negative\n", i);
	} else
{
		printf("%d is zero\n", i);

}
}
