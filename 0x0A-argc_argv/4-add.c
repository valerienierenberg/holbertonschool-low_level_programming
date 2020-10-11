#include <stdio.h>
#include <stdlib.h>
/**
* main- prints sum of positive numbers taken as arguments
* @argc: number of arguments passed to program
* @argv: array of pointers to the arguments
* description: adds arguments
* Return: 1 if error (one of the numbers contains
* symbols that are non digits), otherwise 0
*/
int main(int argc, char *argv[])
{
int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

return (0);
}
