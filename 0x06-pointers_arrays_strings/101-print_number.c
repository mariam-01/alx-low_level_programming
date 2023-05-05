#include "main.h"
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - print number
 *
 *@n: number
 * Return: 0
 */
void print_number(int n)
{
unsigned int m;
if (n < 0)
{
_putchar('-');
m = -n;
}
else
{
m = n;
}
if (m / 10 != 0)
{
print_number(m / 10);
}
_putchar((m % 10) + '0');
}
