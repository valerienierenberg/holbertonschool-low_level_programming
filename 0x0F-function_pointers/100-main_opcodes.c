#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* main- prints op codes of its main function
*
* @argc: argument count
* @argv: argument vector array
*
* Return: 0
*/
int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}

if (argv[1] < 0)
{
printf("Error\n");
exit(2);
}

return (0);
}

