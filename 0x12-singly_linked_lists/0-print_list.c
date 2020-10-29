#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
* print_list- prints all the elements of a list_t list
* @h: pointer (list of type list_t)
*
* Return: the number of nodes in the list (type size_t)
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] %p\n", h->str);
			h = h->next;
			n++;
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			n++;
		}
	}
return (n);
}

