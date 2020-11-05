#include "lists.h"

/**
* delete_nodeint_at_index - Function that deletes the node at index
* index of a listint_t linked list.
* @head: double pointer, pointing to a list
* @index: unsigned int
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *prev;
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

	prev->next = tmp->next;
	free(tmp);

return (1);
}

