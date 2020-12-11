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
