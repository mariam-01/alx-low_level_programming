#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * argstostr -  frees a 2 dimensional grid
 *@av: pointer to a pointer
 *@ac: integer
 *
 * Return: Returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
int l = 0, i, j, k = 0;
char *a;
if (av == 0 || ac == 0)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
l += strlen(av[i]) + 1;
}
a = (char *)malloc(l *sizeof(char) + 1);
if (a == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
{
a[k] = av[i][j];
}
a[k] = '\n';
k++;
}
a[k] = '\0';
return (a);
}
