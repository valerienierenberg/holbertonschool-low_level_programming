#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_nodeint_at_index- returns the nth node of a listint_t linked list
* @head: double pointer
* @index: index of the node, starting at 0
* Return: nth node of a listint_t linked list, or NULL if the node
* does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *traverse;
unsigned int i;

traverse = head;

while (i < index)
{
	if (traverse->next == NULL)
		return (NULL);
	i++;
	traverse = traverse->next;
}

return (traverse);
}
