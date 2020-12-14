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
	newnode->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newnode;

	(*head) = newnode;

	return (newnode);
}
/*
* declare pointer to newnode, malloc size for it
* (check if malloc worked)
* set 'n' of newnode to be the 'n' passed in to function
* set 'next' pointer in newnode to point to head (making newnode 1st in list)
* set 'prev' pointer in newnode to be NULL
* if head exists, make 'prev' pointer of head point to newnode
* reset head to be newnode, return address of newnode
*/
