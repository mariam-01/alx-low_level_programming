#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


/**
 * mult - multiply 2 numbers
 *@n: integer
 *@m: integer
 * Return: integer
 */



int mult(int n, int m)
{
return (n * m);
}

/**
 * validate_input - reallocates a memory block using malloc and free
 *@arg: pointer
 * Return: return 1 ,If it fails return 0
*/


int valid_input(char *arg)
{
while (*arg)
{
if (!isdigit(*arg))
{
return (0);
}
arg++;
}
return (1);
}

/**
 * main - program that multiplies two positive numbers.
 *@argc: integer
 *@argv: pointer
 * Return: pointer ,If it fails return NULL
 */


int main(int argc, char *argv[])
{
char *a, *b;
int n, m, mul;
if (argc != 3)
{
printf("Error\n");
exit(98);
}

a = argv[1];
b = argv[2];

if (!valid_input(a) || !valid_input(b))
{
printf("Error\n");
exit(98);
}

n = atoi(a);
m = atoi(b);

mul = mult(n, m);

printf("%d\n", mul);

return (0);
}
