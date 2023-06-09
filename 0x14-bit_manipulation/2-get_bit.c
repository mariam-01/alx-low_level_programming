#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n:  number 
 * @index:  index 
 *
 * Return:  value of the bit , or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
return (n >> index & 1);
}


