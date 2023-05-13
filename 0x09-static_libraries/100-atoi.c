#include "main.h"
#include <stdio.h>

/**
 * _atoi -  convert a string to an integer
 * @s: string
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int result;
int sign = 1;
unsigned int res = 0;
int digit;
while (*s)
{
if (*s == '-')
sign = -sign;

if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
res = res * 10 + digit;
}
else if (res > 0)
{
break;
}
s++;
}
result = sign *res;
return (result);
}
