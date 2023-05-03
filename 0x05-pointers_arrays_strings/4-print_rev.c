#include "main.h"
#include <string.h>
/**
 * print_rev -  prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
int l;
l = strlen(s);
for (i = l; i > 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
