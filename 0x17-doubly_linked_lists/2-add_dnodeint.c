#include "lists.h"

/**
* add_dnodeint- adds a new node at the beginning of a dlistint_t list
* @n: integer
* @head: pointer to head of list
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = (*head);

	(*head) = newnode;

	return (newnode);
}
