#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint- deletes the head node of a linked list
* @head: double pointer
* Return: n (data)
*/

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *prev;

	if ((*head) == NULL)
		return (0);

	prev = (*head);

	n = prev->n;

	(*head) = prev->next;
	free(prev);

	return (n);
}

