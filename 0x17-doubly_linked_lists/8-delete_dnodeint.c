#include "lists.h"

/**
* delete_dnodeint_at_index - Function that deletes the node at index
* index of a listint_t linked list.
* @head: double pointer, pointing to a list
* @index: unsigned int
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp, *prev;
unsigned int i = 0;

tmp = *head;

	if (tmp != NULL && index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (-1);
	}
	while (tmp != NULL && index != i)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);

	prev->next->prev = tmp->next;
	free(tmp);

return (1);
}
