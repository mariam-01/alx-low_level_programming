#include "variadic_functions.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print all parameters.
 *@...: integers
 *@n: unsigned integer
 *@separator : character
 * Return: integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int a;
if (n == 0)
{
printf("\n");

}

va_start(args, n);

for (i = 0; i < n - 1; i++)
{
a = va_arg(args, int);
printf("%d%s ", a, separator);
}
a = va_arg(args, int);
printf("%d\n", a);
va_end(args);
}
