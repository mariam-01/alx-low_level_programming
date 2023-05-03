#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half- prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
int l, i;
l = strlen(str);
for (i = l / 2 - 1; i <= l; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
