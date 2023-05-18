#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 *@b: integer
 *
 *
 * Return: 0
 */


void *malloc_checked(unsigned int b)
{
int *a;
a = malloc(b);
if (a == NULL)
{
return (98);
}
else
{
return (a);
}
}
