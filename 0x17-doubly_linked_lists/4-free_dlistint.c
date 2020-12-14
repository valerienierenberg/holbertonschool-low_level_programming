#include <stdio.h>
#include "lists.h"

/**
* free_dlistint - Function that frees a dlistint_t list.
* @head: pointer to head of linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *cpy = head;

	while (cpy != NULL)
	{
		tmp = cpy->next;
		free(cpy);
		cpy = tmp;
	}
}

/*
* declare pointer to list 'tmp', and declare pointer 'cpy' to be copy of head
* while the list exists:
* 1. set tmp equal to one node past cpy
* 2. free cpy
* 3. move cpy to one down the list (into the position tmp was holding)
*/
