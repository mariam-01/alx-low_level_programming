#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * infinite_add - adds two numbers
 *@n1: pointer
 *@n2: pointer
 *@r: pointer
 *@size_r: result of adding two numbers
 * Return: pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0, sum = 0;
int len1 = strlen(n1), len2 = strlen(n2);
if (len1 + 1 > size_r || len2 + 1 > size_r)
{
return (NULL);
}
int i = len1 - 1, j = len2 - 1, k = 0;
while (i >= 0 || j >= 0 || carry != 0)
{
int digit1 = (i >= 0) ? n1[i] - '0' : 0;
int digit2 = (j >= 0) ? n2[j] - '0' : 0;
sum = digit1 + digit2 + carry;
carry = sum / 10;
sum %= 10;
r[k++] = '0' + sum;
i--, j--;
}
for (int l = 0, rlen = k - 1; l < rlen; l++, rlen--)
{
char tmp = r[l];
r[l] = r[rlen];
r[rlen] = tmp;
}
r[k] = '\0';
return (r);
}
