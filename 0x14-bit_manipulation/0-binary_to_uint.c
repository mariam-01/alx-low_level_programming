#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>


/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 *
 * Return:  number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
int i;

if (b == NULL)
{
return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}

n = n * 2 + (b[i] - '0');
}
return (n);
}


