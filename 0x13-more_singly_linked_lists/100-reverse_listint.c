#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint- Function that reverses a listint_t list
* @head: double pointe rot head of listint_t list
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *list, *temp;

list = 0;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = list;
		list = *head;
		*head = temp;
	}
*head = list;
return (*head);
}



