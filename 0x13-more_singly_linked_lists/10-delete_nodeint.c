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

/**
* delete_nodeint_at_index- deletes node at index
* @head: double pointer
* @index: index of listint_t list
* Return: 1 if succeeded, -1 if failed
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *dup, *traverse = *head;
unsigned int i = 0;

if (head == NULL)
return (-1);

if (index == 0)
return (pop_listint(head));

if (traverse == NULL)
return (-1);

return (1);
}