#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: pointer to head of list
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

/*
* for loop iterates through list (until h = NUll)
* print 'n' of each node
* set position to next node, continue loop until NULL
* return number of nodes
*/
