#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - Function that frees a listint_t list.
* @head: pointer
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *prev = head;

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev);
		prev = tmp;
	}
}
