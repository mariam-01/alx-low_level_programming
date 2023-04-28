#include "main.h"
/**
* print_line - print line
*@n: number of line length
* Return: Always 0 (Success)
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
