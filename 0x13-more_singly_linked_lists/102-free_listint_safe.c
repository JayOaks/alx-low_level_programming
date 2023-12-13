#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: double pointer to the head of the listint_t list
 *
 * Return: the number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *tmp, *start;

if (h == NULL || *h == NULL)
return (0);

start = *h;

while (*h)
{
tmp = (*h)->next;

free(*h);
count++;

if (tmp == start || tmp == *h)
{
*h = NULL;
break;
}

*h = tmp;
}

*h = NULL;
return (count);
}
