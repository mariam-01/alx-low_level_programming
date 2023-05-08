#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - adds two numbers
 *@s: pointer
 *@b: char
 *@n: pointer
 *
 * Return: thr result pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i, j = 0;
for (i = n; i > 0; i--)
{
s[j] = b;
j++;
}
return (s);
}
