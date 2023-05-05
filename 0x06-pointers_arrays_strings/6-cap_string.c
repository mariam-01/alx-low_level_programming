#include "main.h"
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * cap_string - capitalizes all words of a string
 *
 *@str: pointer
 * Return: pointer of string capitalized
 */
char *cap_string(char *str)
{
int i;
int c = 1;
for (i = 0; str[i] != '\0'; i++)
{
if (c && (str[i] >= 97 && str[i] <= 122))
{
str[i] = str[i] - 32;
}
c = 0;
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','
|| str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?'
|| str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{'
|| str[i] == '}')
{
c = 1;
}
}
return (str);
}
