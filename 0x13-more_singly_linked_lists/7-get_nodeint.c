#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * @index: the index of the node, starting at 0
 *
 * Return: The nth node, else return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int cindex;

if (head == NULL)
return (NULL);

for (cindex = 0; cindex < index; cindex++)
{
head = head->next;
if (head == NULL)
return (NULL);
}

return (head);
}
