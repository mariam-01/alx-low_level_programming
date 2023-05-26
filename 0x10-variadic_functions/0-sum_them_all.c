#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  sum of all its parameters.
 *@...: integers
 *@n: unsigned integer
 *
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
va_list args;
var_start(args, n);
int s = 0, a;
unsigned int i;
for (i = 0; i < n; i++)
{
a = va_arg(args, int);
s += a;

}
va_end(args);
return (s);

}

