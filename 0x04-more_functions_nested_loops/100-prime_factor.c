#include <stdio.h>
#include <math.h>
/**
 * largest_prime_factor - print largest prime factor
 *@n: number of line length
 * Return: Always 0.
 */
void largest_prime_factor(long int n)
{
int i, largest;
while (n % 2 == 0)
{
n /= 2;
}
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
n /= i;
largest = i;
}
}
if (n > 2)
{
largest = n;
printf("%d\n", largest);
}
}
/**
 * main - print largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
largest_prime_factor(612852475143);
return (0);
}
