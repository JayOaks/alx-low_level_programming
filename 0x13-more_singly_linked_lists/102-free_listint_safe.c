#include "lists.h"
#include <stdio.h>

size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *tmp;

if (h == NULL || *h == NULL)
return (0);

while (*h)
{
tmp = (*h)->next;

if (tmp && tmp <= *h)
{
free(*h);
*h = NULL;
count++;
break;
}

free(*h);
*h = tmp;
count++;
}

*h = NULL;
return (count);
}
