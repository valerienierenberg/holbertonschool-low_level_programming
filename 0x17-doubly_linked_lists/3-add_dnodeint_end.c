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

	/*
	* if (head == NULL)
	* return (NULL);
	*/

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

	lastnode = (*head);

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;
	newnode->prev = lastnode;

return (lastnode);
}

/*
* declare pointer to lastnode, set that equal to head (it's a copy of list)
* declare pointer to newnode, malloc size for it (check if malloc worked)
* set 'next' pointer of newnode to point to NULL (line 26)
* copy 'n' that is passed to function into newnode (line 27)
* if there is only one node in the list,
*/
