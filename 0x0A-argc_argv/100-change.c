#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  the minimum number of coins to make change for an amount of money
 *@argc: number
 *@argv: pointer
 *
 * Return: returns 0
 */


int main(int argc, char *argv[])
{
int cents, count = 0, i;
int coins[] = {25, 10, 5, 2, 1};
cents = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (cents < 0)
{
printf("0\n");
return (1);
}
for (i = 0; i < 5; i++)
{
if (cents >= coins[i])
{
count += cents / coins[i];
cents %= coins[i];
if (cents % coins[i] == 0)
{
break;
}
}
}
printf("%d\n", count);
return (0);
}
