#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strpbrk -  search a string for any of a set of bytes.
 *@s: pointer
 *@accept: pointer
 *
 *
 * Return: the number
 */

char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s != '\0')
{
p = accept;
while (*p != '\0')
{
if (*p == *s)
{
return (s);
}
p++;
}
s++;
}
return (0);
}
