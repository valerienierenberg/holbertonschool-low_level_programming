#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* sum_dlistint- returns the sum of all the data (n) of a dlistint_t linked list
* @head: pointer to beginning of the list
* Return: sum of all data (n) of a linked list
* if the list is empty, returns 0
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *traverse;
	int sum = 0;

	traverse = head;

	if (traverse == NULL)
		return (0);

	while (traverse != NULL)
	{
		sum = sum + traverse->n;
		traverse = traverse->next;
	}

return (sum);
}

/*
* declare a copy of list (traverse = head), and 'sum' initialized to 0
* if the list is empty, return 0
* while the list exists:
* 1. add 'n' from each node to the sum
* 2. set the copy to the next position in order to move through the list
* return the sum
*/
