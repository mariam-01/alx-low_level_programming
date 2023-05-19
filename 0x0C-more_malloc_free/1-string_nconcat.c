#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


/**
 * string_nconcat -  concatenates two strings.
 *@s1: pointer
 *@s2: pointer
 *@n: integer
 * Return: pointer ,If it fails return NULL
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
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

l = 1 + strlen(s1) + n;
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
while (j < n)
{
a[i + j] = s2[j];
j++;
}
a[l] = '\0';
return (a);
}
}
