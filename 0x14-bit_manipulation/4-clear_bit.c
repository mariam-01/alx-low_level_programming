#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer
 * @index: index
 * Return: 1 , or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
