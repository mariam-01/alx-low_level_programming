#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
int l, i;
char *tmp;
l = strlen(s);
for (i = 0; i < l / 2; i++)
{
tmp[i] = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = tmp[i];
}
