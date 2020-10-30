#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node_end- adds a new node at the end of a list_t list
* @str: string, (needs to be duplicated)
* @head: first node
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *lastnode;
	int i = 0;

	newnode = (list_t *) malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	lastnode = (*head);

	while (str[i] != '\0')
		i++;

	newnode->next = NULL;
	newnode->len = i;
	newnode->str = strdup(str);

	if ((*head) == NULL)
	{
		(*head) = newnode;
		return ((*head));
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;

return (lastnode);
}
