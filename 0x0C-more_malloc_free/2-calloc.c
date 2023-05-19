#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * _calloc -  llocates memory for an array, using malloc.
 *
 *@nmemb: integer
 *@size: integer
 * Return: pointer ,If it fails return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *a;
if (size == 0 || nmemb == 0)
{
return (NULL);
}
a = malloc(nmemb * size);
if (a == 0)
{
return (NULL);
}
memset(ptr, 0, nmemb * size);
return (a);
}
