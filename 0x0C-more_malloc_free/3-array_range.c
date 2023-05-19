#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * array_range -  creates an array of integers.
 *
 *@min: integer
 *@max: integer
 * Return: pointer ,If it fails return NULL
 */

int *array_range(int min, int max)
{
int size, i;
int *a;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
a = malloc(size *sizeof(int));
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
a[i] = min + i;
}

return (a);
}
