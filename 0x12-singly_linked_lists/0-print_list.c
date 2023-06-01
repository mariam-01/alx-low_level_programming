#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 *@h : struct
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t cpt = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}

h = h->next;
cpt++;
}
return (cpt);
}

