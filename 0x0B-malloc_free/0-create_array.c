#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 *@size: number
 *@c: character
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */


char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *a;
if (size == 0)
{
return (NULL);
}
else
{
a = malloc(size * sizeof(char));
while (i < size)
{
a[i] = c;
i++;
}
a[size] = '\0';
}
return (a);
}
