#include "lists.h"

/**
* insert_dnodeint_at_index - Function that inserts a
* new node at a given position.
* @h: double pointer to beginning of list
* @idx: int index
* @n: n value (integer)
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cpy = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		return (NULL);

	while (cpy != NULL)
	{
		if ((idx - 1) == i)
	{
		new->n = n;
		cpy->prev->next = new;
		new->prev = cpy->prev;
		cpy->prev = new;
		new->next = cpy;
		return (new);
	}
	cpy = cpy->next;
	i++;
}
return (NULL);
}


/*
* new->n = n;
* new->next = cpy->next;
* cpy->next = new;
* return (new);
*/
