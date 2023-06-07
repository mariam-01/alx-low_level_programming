#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * pop_listint - deletes the head node of a list_t list.
 * @head: head of the list.
 * return :  returns the head node’s data
 */
int pop_listint(listint_t **head)
{
int num;
listint_t *tmp;

if (head == NULL || *head == NULL)
{
return (0);
}
tmp = *head;
num  = tmp->n;
*head = tmp->next;
free(tmp);
return (num);

}
