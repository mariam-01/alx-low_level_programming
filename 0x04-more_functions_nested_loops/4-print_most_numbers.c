#include "main.h"
/**
* print_most_numbers - print most numbers
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
for (i = 48; i < 57; i++)
{
if ((i != 50) || (i != 52))
{
_putchar(i);
}
}
_putchar('\n');
}
