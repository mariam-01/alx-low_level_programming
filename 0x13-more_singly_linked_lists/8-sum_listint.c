#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * sum_listint - Returns the sum of all the dataof a listint_t linked list.
 * @head: the head of the list.
 * Return: sum of all values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}

