#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2- prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
int l, i;
l = strlen(str);
for (i = 0; i < l; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
