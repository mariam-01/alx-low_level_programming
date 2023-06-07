#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: the head of the list.
 * Return: the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *pre = NULL, *next;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = pre;
pre = *head;
*head = next;
}
*head = pre;
return (*head);
}
