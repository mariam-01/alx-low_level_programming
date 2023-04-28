#include "main.h"
/**
* more_numbers - print more numbers
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
int i, j, n;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
n = j;
if (j > 9)
{
_putchar(49);
n = j % 10;
}
_putchar(n + 48);
}
_putchar('\n');
}
}
