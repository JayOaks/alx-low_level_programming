#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the list, else exit with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *tmp;
size_t nodes = 0, i;

while (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
nodes++;

tmp = head;
for (i = 0; i < nodes - 1; i++)
{
if (slow->next == tmp)
{
printf("-> [%p] %d\n", (void *)slow->next, slow->next->n);
exit(98);
}
tmp = tmp->next;
}

slow = slow->next;
}

return (nodes);
}
