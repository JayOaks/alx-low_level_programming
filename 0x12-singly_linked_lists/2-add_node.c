#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: is the pointer to a pointer to the head of the linked list
 * @str: is the string to be duplicated and added as the value of the new node
 *
 * Return: (list_t *) The address of the new element, or NULL if it fails.
**/

list_t *add_node(list_t **head, const char *str)
{
list_t *nnode;
int len;

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

len = 0;
while (str[len])
len++;

nnode->len = strlen(str);
nnode->next = *head;
*head = nnode;

return (nnode);
}
