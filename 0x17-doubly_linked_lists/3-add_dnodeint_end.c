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
		newnode->prev = NULL;
		(*head) = newnode;
		return ((*head));
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;
	newnode->prev = lastnode;

return (newnode);
}

/*
* declare pointer to lastnode, set that equal to head (it's a copy of list)
* declare pointer to newnode, malloc size for it (check if malloc worked)
* set 'next' pointer of newnode to point to NULL (line 22)
* copy 'n' that is passed to function into newnode (line 23)
* if there's no list yet, set 'prev' pointer of newnode to point to NULL,
* and set head to be newnode. return the newnode (line 25-29)
*
* While loop is to get position of lastnode to one place before end of list
* Line 35, we are at one from end of the list, we then set 'next' to be newnode
* set 'prev' pointer of newnode to point to lastnode
* return address of newnode
*/
