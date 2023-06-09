#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n:  number
 * @index:  index
 *
 * Return:  1 , or -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
*n |= (1UL << index);
return (1);
}


