#include "main.h"
/**
 * swap_int - swap 2 integers
 *
 *@a: number one
 *@b: number two
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
