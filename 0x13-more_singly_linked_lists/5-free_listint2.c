#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * free_listint - Frees a list_t list.
 * @head: head of the list.
 */
void free_listint2(listint_t **head)
{
listint_t *current, *next;
if (head == NULL)
	return;
current = *head;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
*head = NULL;
}
