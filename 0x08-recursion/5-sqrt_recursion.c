#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * sqr - returns the value of the natural square root of a number
 *@n: number
 *@a: number
 *@e: number
 * Return: number
 */

int sqr(int n, int a, int e)
{
int m, s;
if (a > e)
{
return (-1);
}
m = (a + e) / 2;
s = m  *m;
if (s == n)
{
return (m);
}
else if (s < n)
{
return (sqr(n, m + 1, e));
}
else
{
return (sqr(n, a, m - 1));
}
}
/**
 * _sqrt_recursion - returns the value of the natural square root of a number
 *@n: number
 *
 *
 * Return: number
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqr(n, 0, n));
}
