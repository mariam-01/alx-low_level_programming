#include "main.h"
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * rot13 - encodes a string using rot13
 *
 *@str: pointer
 * Return: string into rot13
 */

char *rot13(char *str)
{
char *al = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; al[j] != '\0'; j++)
{
if (str[i] == al[j])
{
str[i] = rot13[j];
break;
}
}
}
return (str);
}
