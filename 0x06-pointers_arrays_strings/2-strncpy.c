#include "main.h"
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strncpy - copies a string
 *@dest: pointer
 *@src: pointer
 *@n: number of bytes
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (i; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
