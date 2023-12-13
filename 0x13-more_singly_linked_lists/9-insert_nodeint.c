#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint_t list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: value for the new node to contain
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nnode, *tmp;
unsigned int i;

if (head == NULL && idx != 0)
return (NULL);

nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
return (NULL);

nnode->n = n;

if (idx == 0)
{
nnode->next = *head;
*head = nnode;
return (nnode);
}

tmp = *head;
for (i = 0; i < idx - 1; i++)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}

nnode->next = tmp->next;
tmp->next = nnode;

return (nnode);
}
