#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* main- performs simple operations
* @argc: argument count
* @argv: argument vector
* Return: result of operation, or error if wrong number
* of arguments, error if operator is not +, -, %, or /,
* and error if user tries to divide by 0.
*
*/
int main(int argc, char **argv)
{
int i1 = 0;
int i2 = 0;
int r = 0;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

i1 = atoi(argv[1]);
i2 = atoi(argv[3]);

if (i2 == 0)
{
printf("Error\n");
exit(100);
}

r = (*get_op_func(argv[2]))(i1, i2);
printf("%d\n", r);
return (0);
}
