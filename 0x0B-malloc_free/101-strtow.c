#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


/**
 * count_l - count number of letters
 *@s: pointer
 *
 *
 * Return: integer
 */


int count_l(char *s)
{
int i, cpt = 0;
for (i = 0; s[i]; i++)
{
if (s[i] == ' ')
{
if (s[i + 1] != ' ' && s[i + 1] != '\0')
{
cpt++;
}
}
else if (i == 0)
{
cpt++;
}
}
cpt++;
return (cpt);
}

/**
 * strtow - splits a string into words.
 *@str: pointer
 *
 *
 * Return: pointer to an array of strings, or NULL if it fails
 */

char **strtow(char *str)
{
int i = 0, j, k, l, nb = 0, c = 0;
char **a;
if (str == NULL || *str == '\0')
	return (NULL);
nb = count_l(str);
if (nb == 1)
	return (NULL);
a = (char **)malloc(nb *sizeof(char *));
if (a == NULL)
	return (NULL);
a[nb - 1] = NULL;
i = 0;
while (str[i])
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
{
j++;
a[c] = (char *)malloc(j *sizeof(char));
j--;
if (a[c] == NULL)
{
for (k = 0; k < c; k++)
	free(a[k]);
free(a[nb - 1]);
free(a);
return (NULL);
}
for (l = 0; l < j; l++)
	a[c][l] = str[i + l];
a[c][l] = '\0';
c++;
i = i + j;
}
}
else
	i++;
}
return (a);
}
