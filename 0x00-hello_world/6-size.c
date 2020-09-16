/**
* main- void
* description: print size of various types on the computer
* Return: 0
*/

#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long int l;
	long long int k;
	float f;

	printf("Size of a char: %i.\n", sizeof(c));
	printf("Size of an int: %i.\n", sizeof(i));
	printf("Size of a long int: %f.\n", sizeof(l));
	printf("Size of a long long int: %f.\n", sizeof(k));
	printf("Size of a float: %f.\n", sizeof(f));

	return (0);
}
