#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
* print_strings- function that prints strings
* @separator: const char pointer
* @n: unsigned int
* Return- void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

va_list args;
unsigned int i;

va_start(args, n);

if (args == NULL)
printf("(nil)\n");

for (i = 0; i < n; i++)
{
printf("%s", va_arg(args, char *));

if (separator != NULL)
{
if (i < n - 1)
printf("%s", separator);
}
}

putchar('\n');
va_end(args);
}
