#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copies the string pointed
 * @dest: destination array
 * @src: source array
 * Return: the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
int i, l;
l = strlen(src);
for (i = 0; i < l; i++)
{
dest[i] = src[i];
}
return (dest);
}
