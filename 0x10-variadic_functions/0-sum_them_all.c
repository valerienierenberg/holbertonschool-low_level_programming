#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;

va_start (args, n);         /* Initialize the argument list. */

sum = 0;
for (i = 0; i < n; i++)
sum += va_arg (args, int);    /* Get the next argument value. */

va_end (args);                  /* Clean up. */
return sum;
}

