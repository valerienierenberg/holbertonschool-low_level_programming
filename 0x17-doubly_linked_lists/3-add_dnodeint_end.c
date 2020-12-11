#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @n: integer
* @head: pointer to head of linked list
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *lastnode;

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

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
