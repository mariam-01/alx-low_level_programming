#include "lists.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>


/**
 * listint_len -  return the number of all the elements of a list_t list.
 *@h : struct
 * Return: the number of element
 */

size_t listint_len(const listint_t *h)
{
size_t cpt = 0;
while (h != NULL)
{
h = h->next;
cpt++;
}
return (cpt);
}




