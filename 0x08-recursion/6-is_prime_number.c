#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _prime - check for prime number
 *@n: number
 *@i: number
 * Return: number
 */

int _prime(int n, int i)
{
if (i * i > n)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (_prime(n, i + 1));
}
}

/**
 * is_prime_number - returns 1 if n is a prime number, otherwise return 0.
 *@n: number
 * Return: number
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (_prime(n, 2));
}
}
