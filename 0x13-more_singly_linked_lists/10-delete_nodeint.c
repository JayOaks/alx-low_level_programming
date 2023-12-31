#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a listint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *tmp;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
return (1);
}

current = *head;
for (i = 0; i < index - 1; i++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}

tmp = current->next;
current->next = tmp->next;
free(tmp);

return (1);
}
