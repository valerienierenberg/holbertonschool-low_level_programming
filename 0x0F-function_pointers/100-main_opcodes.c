#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
*
*
*
*
*
*/
int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}

if (argv[2] < 0)
{
printf("Error\n");
exit(2);
}

return (0);
}

