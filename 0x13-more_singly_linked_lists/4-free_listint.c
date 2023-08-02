#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Frees a linked list of integers.
 * @head: Pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
