#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_diagsums -prints the sum of the two diagonals of a square matrix
 *@a: pointer
 *@size : number
 *
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
int i, s1 = 0, s2 = 0;
for (i = 0; i < size; i++)
{
s1 += *(a + i * size + i);
s2 += *(a + i * size + size - i - 1);
}
printf("%d,", s1);
printf(" %d\n", s2);
}
