#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the list, else exit with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *vts;
size_t nodes = 0;

while (slow)
{
printf("[%p] %d\n", (void *)slow, slow->n);
nodes++;
slow = slow->next;

if (slow == head)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
}

return (nodes);
}
