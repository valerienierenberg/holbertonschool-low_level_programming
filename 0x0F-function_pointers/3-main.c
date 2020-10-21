#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main- performs simple operations
*
* Return: result of operation, or error if wrong number
* of arguments, error if operator is not +, -, %, or /,
* and error if user tries to divide by 0.
*
*/

int main(int argc, void *argv)
{
if (argc != 3)
	printf("Error\n");
	exit(98);

if (argv[2] != '+' || argv[2] != '-' || argv[2] != '/' || argv[2] != '%')
	printf("Error\n");
	exit(99);

if ((argv[2] == '/' && argv[3] == '0') || (argv[2] == '%' && argv[2] == '0')
	printf("Error\n");
	exit(100);
}

