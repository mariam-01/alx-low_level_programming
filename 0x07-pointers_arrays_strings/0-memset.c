#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset -  fills memory with a constant byte
 *@s: pointer
 *@b: char
 *@n: number
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
