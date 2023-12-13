#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}

return (nodes);
}
