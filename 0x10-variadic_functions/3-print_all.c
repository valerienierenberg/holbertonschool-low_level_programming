#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
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
unsigned int x = 0;
int b;
char *string;

while (format)
{
va_start(args, format);
while (format[x] != '\0')
{
b = 1;
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
	string = va_arg(args, char *);
	if (!string)
	string = "(nil)";
	printf("%s", string);
	break;
default:
	b = 0;
	break;
}
if (format[x + 1] && b)
printf(", ");
x++;
}
va_end(args);
break;
}
printf("\n");
}
