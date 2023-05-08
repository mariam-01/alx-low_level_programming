#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _memcpy - copies memory area
 *@dest: pointer
 *@src:pointer
 *@n: number
 *
 * Return: the result pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
