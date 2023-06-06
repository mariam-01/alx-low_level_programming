#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * add_nodeint -  adds a new node at the beginning of a list_t list.
 *@head : struct list_t
 *@str : string
 * Return: the address of the new element, or NULL if it failed
 */



list_t *add_nodeint(list_t **head, const int n)
{
list_t *new_node;
if (n == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (new_node->n == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = *head;
*head = new_node;

return (new_node);
}

