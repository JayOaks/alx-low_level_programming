#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to the pointer to the head of the list
 * @n: The integer for the new node to contain
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nnode;

nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
return (NULL);

nnode->n = n;
nnode->next = *head;
*head = nnode;

return (nnode);
}
