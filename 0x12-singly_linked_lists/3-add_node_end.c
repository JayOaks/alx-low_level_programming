#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: is the pointer to a pointer to the head of the linked list
 * @str: is the string to be duplicated and added as the value of the new node
 *
 * Return: (list_t *) The address of the new element, or NULL if it fails.
**/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *nnode, *current;

if (str == NULL)
return (NULL);

nnode = malloc(sizeof(list_t));

if (nnode == NULL)
return (NULL);

nnode->str = strdup(str);

if (nnode->str == NULL)
{
free(nnode);
return (NULL);
}

nnode->len = strlen(str);
nnode->next = NULL;

if (*head == NULL)
{
*head = nnode;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = nnode;
}

return (nnode);
}
