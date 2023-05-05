#include "main.h"
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * leet - encodes a string into 1337
 *
 *@str: pointer
 * Return: string into 1337
 */

char *leet(char *str)
{
char *l = "AEOTL";
char *d = "43071";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (str[i] == l[j] || str[i] == l[j] + 32)
{
str[i] = d[j];
break;
}
}
}
return (str);
}
