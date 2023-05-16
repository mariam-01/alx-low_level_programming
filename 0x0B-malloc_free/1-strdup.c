#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * _strdup -  returns a pointer to a new string
 *@str: pointer
 *
 *
 * Return: returns a pointer to the duplicated string, or NULL if it fails
 */


char *_strdup(char *str)
{
unsigned int i = 0, l;
char *a;
l = 1 + strlen(str);
a = malloc(l *sizeof(char));

if (l == 0 || a == 0)
{
return (NULL);
}
else
{
while (i < l)
{
a[i] = str[i];
i++;
}
a[l] = '\0';
}

return (a);
}
