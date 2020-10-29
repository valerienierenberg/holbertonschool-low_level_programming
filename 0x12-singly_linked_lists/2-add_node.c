#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node- adds a new node at the beginning of a list_t list
* @str: string, (needs to be duplicated)
* @head: first node
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{

	list_t *newnode;
	int i = 0;

	while (str[i] != '\0')
	i++;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);


	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = (*head);

	(*head) = newnode;

	return (newnode);
}

