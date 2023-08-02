#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * The function frees each node of the list and sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
return;
while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = NULL;
}
