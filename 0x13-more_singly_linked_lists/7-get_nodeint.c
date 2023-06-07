#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index:  index of the node, starting at 0
 * Return: the nth node, or NULL if the node does not exist.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int cpt = 0;
listint_t *current = head;

while (current != NULL)
{
if (cpt == index)
{
return (current);
}
cpt++;
current = current->next;
}

return (NULL);
}

