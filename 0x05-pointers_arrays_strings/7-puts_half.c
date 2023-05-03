#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half- prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
int l, i, n;
l = strlen(str);
if (l % 2 == 0)
{
n = l / 2;
}
else
{
n = (l / 2) + 1;
}
for (i = n; i < l; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
