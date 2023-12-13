#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to the head of the listint_t list
 *
 * Return: 0 if linked list is empty, else the head node's data (n)
 */

int pop_listint(listint_t **head)
{
int hdata;
listint_t *tmp;

if (head == NULL || *head == NULL)
{
return (0);
}

tmp = *head;
hdata = tmp->n;
*head = (*head)->next;
free(tmp);

return (hdata);
}
