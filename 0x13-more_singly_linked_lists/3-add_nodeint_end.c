#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end- adds a new node at the end of a listint_t list
* @n: integer
* @head: first node
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastnode;

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	lastnode = (*head);

	newnode->next = NULL;
	newnode->n = n;

	if ((*head) == NULL)
	{
		(*head) = newnode;
		return ((*head));
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;

return (lastnode);
}
