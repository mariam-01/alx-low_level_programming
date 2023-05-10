#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *@s: pointer
 *
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);

}
