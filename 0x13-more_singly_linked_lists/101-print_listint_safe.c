#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the list, else exit with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
size_t nodes = 0;

while (slow != NULL)
{
const listint_t *tmp = head;
for (size_t i = 0; i < nodes; i++)
{
if (tmp == slow->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
printf("-> [%p] %d\n", (void *)slow->next, slow->next->n);
nodes++;
return (nodes);
}
tmp = tmp->next;
}

printf("[%p] %d\n", (void *)slow, slow->n);
nodes++;
slow = slow->next;
}

return (nodes);
}
