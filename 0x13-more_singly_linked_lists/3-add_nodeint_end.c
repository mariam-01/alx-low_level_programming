#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 *add_nodeint_end -  t adds a new node at the end of a list_t list.
 *@head : struct list_t
 *@str : integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_n;
listint_t *current;


new_n = malloc(sizeof(listint_t));
if (new_n == NULL)
{
return (NULL);
}
new_n->n = n;

new_n->next = NULL;
if (*head == NULL)
{
*head = new_n;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_n;

}
return (new_n);
}


