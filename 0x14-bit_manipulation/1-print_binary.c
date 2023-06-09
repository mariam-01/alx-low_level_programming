#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>


/**
 * print_binary - Prints the binary representation of a number.
 * @n: Unsigned long int number .
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}

putchar((n & 1) + '0');
}


