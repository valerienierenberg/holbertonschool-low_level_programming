#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* print_list- prints all the elements of a list_t list
* @h: pointer (list of type list_t)
*
* Return: the number of nodes in the list (type size_t)
*/

size_t print_listint(const listint_t *h)
{
	size_t nodecount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodecount++;
	}
return (nodecount);
}

