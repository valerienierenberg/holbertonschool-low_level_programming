#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint2 - Function that frees a listint_t list.
* The function also sets the head to NULL
* @head: double pointer to beginning of linked list
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *prev;

	prev = (*head);

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev);
		prev = tmp;
	}

(*head) = prev;
}
