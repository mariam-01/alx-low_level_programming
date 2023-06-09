#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * flip_bits - Returns the number of bits needed to flip
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a;
unsigned int cpt = 0;
a = n ^ m;
while (a != 0)
{
cpt += a & 1;
a >>= 1;
}

return (cpt);
}



