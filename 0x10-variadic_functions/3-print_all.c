#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all parameters.
 *@...: integers
 *@format : character
 * Return: nothing
 */


void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *s, c;
float f;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s)
printf("%s", s);
else
printf("(nil)");
break;
default:
i++;
continue;
}
if (format[i + 1])
printf(", ");

i++;
}
printf("\n");
va_end(args);
}
