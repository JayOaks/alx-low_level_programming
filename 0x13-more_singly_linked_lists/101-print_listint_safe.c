#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the list, else exit with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *tmp;
size_t nodes = 0;
size_t i;

if (head == NULL)
return (0);

if (head->next == head)
{
printf("[%p] %d\n", (void *)head, head->n);
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
return (1);
}

slow = head;
while (slow != NULL)
{
tmp = head;
for (i = 0; i < nodes; i++)
{
if (tmp == slow->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
printf("-> [%p] %d\n", (void *)slow->next, slow->next->n);
return (nodes + 1);
}
tmp = tmp->next;
}

printf("[%p] %d\n", (void *)slow, slow->n);
nodes++;
slow = slow->next;
}

return (nodes);
}
