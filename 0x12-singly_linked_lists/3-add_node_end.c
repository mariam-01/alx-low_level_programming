#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 *add_node_end -  t adds a new node at the end of a list_t list.
 *@head : struct list_t
 *@str : string
 * Return: the address of the new element, or NULL if it failed
 */



list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *current;

if (str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
current = current->next;
}
current->next = new_node;
new_node->len = strlen(str);


return (new_node);
}
