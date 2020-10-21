#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_iterator- executes a function given as
* parameter on each element of an array
*
* @array: array to execute function upon
* @size: size of array
* @action: pointer to the function to enact upon elemnts of array
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
	for (i = 0; i < size; i++)
		action(array[i]);
}
}
