#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_dnodeint_at_index- returns the nth node of a dlistint_t linked list
* @head: double pointer to beginning of linked list
* @index: index of the node, starting at 0
* Return: nth node of a listint_t linked list, or NULL if the node
* does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

dlistint_t *traverse = head;
unsigned int i = 0;

while (i != index)
{
	if (traverse->next == NULL)
		return (NULL);
	i++;
	traverse = traverse->next;
}

return (traverse);
}
