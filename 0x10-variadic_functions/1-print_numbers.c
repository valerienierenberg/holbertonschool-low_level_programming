#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
* print_numbers- function that prints numbers
* @separator: const char pointer
* @n: unsigned int
* Return- void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
}

if (separator != NULL)
{
if (i < n - 1)
printf("%s", separator);
}

_putchar('\n');
va_end(args);

}
