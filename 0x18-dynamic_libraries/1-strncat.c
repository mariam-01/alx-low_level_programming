#include "main.h"
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strncat - concatenates two strings
 *@dest: pointer
 *@src: pointer
 *@n: number of bytes
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i])
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i++] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
