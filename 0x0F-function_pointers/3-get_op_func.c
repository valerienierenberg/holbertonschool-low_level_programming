#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* get_op_func- selects the correct function to perform
* the operation asked by the user
* @a: first integer
* @b: second interger
*
* Return: pointer to the function that corresponds to the
* operator given as a parameter
*/

int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
int i;

i = 0;
while (s[i] != '\0')
i++;
return (i);
}
