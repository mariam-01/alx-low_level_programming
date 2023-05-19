#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


/**
 * _realloc - reallocates a memory block using malloc and free
 *@ptr: void
 *@old_size: integer
 *@new_size: integer
 * Return: pointer ,If it fails return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
int s;
if (ptr == NULL)
	return (malloc(new_size));

if (new_size == old_size)
	return (ptr);

if (new_size == 0)
{
free(ptr);
return (NULL);
}

p = malloc(new_size);
if (p == NULL)
{
return (NULL);
}

s = (old_size < new_size) ? old_size : new_size;
memcpy(p, ptr, s);

free(ptr);

return (p);
}
