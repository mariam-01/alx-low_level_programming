#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: integer
 *@height: integer
 *
 * Return: returns a pointer, or NULL if it fails
 */


int **alloc_grid(int width, int height)
{
int **a, i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}

a = (int **)malloc(height * sizeof(int *));
if (a == 0)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
a[i] = (int *)calloc(width, sizeof(int));
if (a[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(a[j]);
free(a);
}
return (NULL);
}
}
return (a);
}
