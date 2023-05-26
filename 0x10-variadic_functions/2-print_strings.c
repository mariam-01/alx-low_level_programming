#include "variadic_functions.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print all parameters.
 *@...: integers
 *@n: unsigned integer
 *@separator : character
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *a;
unsigned int i;

if (n == 0)
{
printf("\n");
return;
}

va_start(args, n);

for (i = 0; i < n; i++)
{
a = va_arg(args, char *);

if (a != NULL)
{
printf("%s", a);
}
else
{
printf("(nil)");
}

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}

