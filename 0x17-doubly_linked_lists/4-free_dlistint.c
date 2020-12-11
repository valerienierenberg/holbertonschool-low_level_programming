#include <stdio.h>
#include "lists.h"

/**
* free_dlistint - Function that frees a dlistint_t list.
* @head: pointer to head of linked list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *prev = head;

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev);
		prev = tmp;
	}
}
