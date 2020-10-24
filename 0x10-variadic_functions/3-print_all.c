#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
* print_all- function that prints anything
* @format: const char pointer
*
* Return- void
*/
void print_all(const char * const format, ...)
{

va_list args;
unsigned int x;

x = 0;

va_start(args, format);

while (format)
{
while (format[x] != '\0')
{

if (x++)
printf(", ");

switch (format[x])
{
case 'c':
	printf("%c", va_arg(args, int));
	break;
case 'i':
	printf("%d", va_arg(args, int));
	break;
case 'f':
	printf("%f", va_arg(args, double));
	break;
case 's':
	printf("%s", va_arg(args, char *));
	break;
default:
	break;
	}
x++;


}
va_end(args);
break;
}
printf("\n");
}

