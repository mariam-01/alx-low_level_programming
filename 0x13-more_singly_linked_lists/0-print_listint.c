#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_listint -  prints all the elements of a list_t list.
 *@h : struct
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t cpt = 0;
while (h != NULL)
{

printf("%d\n", h->n);

h = h->next;
cpt++;
}
return (cpt);
}


