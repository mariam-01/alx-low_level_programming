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
list_t *new_n;
list_t *current;

if (str == NULL)
{
return (NULL);
}
new_n = malloc(sizeof(list_t));
if (new_n == NULL)
{
return (NULL);
}
new_n->str = strdup(str);
if (new_n->str == NULL)
{
free(new_n);
return (NULL);
}
new_n->len = strlen(str);
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
