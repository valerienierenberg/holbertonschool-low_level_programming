#include <stdio.h>
#include "lists.h"
void print_b4_main(void)__attribute__((constructor));
/**
* print_b4_main- Function that prints
* "You're beat! and yet, you must allow, I bore my house upon my back!"
* before the main function is executed
*/

void print_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
