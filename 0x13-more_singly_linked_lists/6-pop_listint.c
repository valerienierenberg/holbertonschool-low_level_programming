#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint- deletes the head node of a linked list
* @head: double pointer
* Return: n (data)
*/

int pop_listint(listint_t **head) 
{
    listint_t *tmp = *head, *prev;
    int key = 0;
    int n = 0;
 
    if (head == NULL)
        return (0);

    if (tmp != NULL && tmp->n == key)
    { 
        *head = tmp->next;
        free(tmp);
        return (n);
    } 
  
    while (tmp != NULL && tmp->n != key)
    {
        prev = tmp;
        tmp = tmp->next;
    }

    if (tmp == NULL)
        return (n);

    prev->next = tmp->next;
    free(tmp);
    return (n);
}
