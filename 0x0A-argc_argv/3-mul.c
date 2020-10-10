#include <stdio.h>
#include <stdlib.h>
/**
* main- multiplies two numbers (arguments)
* @argc: number of arguments
* @argv: names of arguments
* description: multiplies two arguments
* Return: 1 if error, otherwise 0
*/
int main(int argc, char *argv[])
{
	int prod;
	int num1;
	int num2;
/* This line is giving me segmentation fault instead of printing error */
	if (argc < 3)
		{
		printf("Error\n");
		return(1);
		}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;
	printf("%d\n", prod);

return (0);
}
