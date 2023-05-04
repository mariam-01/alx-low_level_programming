#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - concatenates two strings
 *@dest: pointer
 *@src: pointer
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i])
{
i++;
}
for (j = 0; src[j]; j++)
{
dest[i++] = src[j];
}
return (dest);
}
