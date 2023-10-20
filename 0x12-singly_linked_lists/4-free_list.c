#include "lists.h"

/**
 * free_list - frees a linked list_t list
 * @head: is the pointer to the head of the linked list
 *
 * Return: void
**/

void free_list(list_t *head)
{
list_t *current, *temp;

while (head != NULL)
{
current = head;
temp = current->next;
free(current->str);
free(current);
head = temp;
}
}
