#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked dlistint_t list.
* @h: pointer to head of list
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}

/*
* for loop iterates through list (until h = NUll)
* set position to next node, continue loop until NULL
* return number of nodes
*/
