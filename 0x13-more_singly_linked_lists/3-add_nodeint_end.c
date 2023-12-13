#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer to the head of the list
 * @n: the integer for the new node to contain
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nnode, *tmp;

nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
return (NULL);

nnode->n = n;
nnode->next = NULL;

if (*head == NULL)
{
*head = nnode;
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = nnode;
}

return (nnode);
}
