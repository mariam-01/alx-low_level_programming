#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * str_concat -  returns a pointer to a new string
 *@s1: pointer
 *@s2: pointer
 *
 * Return: returns a pointer, or NULL if it fails
 */


char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, j = 0, l;
char *a;
if (s1 == NULL)
{
s1 = "\0";
}
else if (s2 == NULL)
{
s2 = "\0";
}

l = 1 + strlen(s1) + strlen(s2);
a = malloc(l *sizeof(char));
if (a == 0)
{
return (NULL);
}

while (i < strlen(s1))
{
a[i] = s1[i];
i++;
}
while (j < strlen(s2))
{
a[i + j] = s2[j];
j++;
}
a[l] = '\0';
return (a);
}
