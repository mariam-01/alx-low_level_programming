#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  prints all arguments it receives
 *@argc: number
 *@argv: pointer
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
int i, s = 0;
const char *arg, *c;
if (argc <= 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
arg = argv[i];
for (c = arg; *c != '\0'; c++)
{
if (!isdigit(*c))
{
printf("Error\n");
return (1);
}
}
s += atoi(argv[i]);
}

printf("%d\n", s);
}
return (0);
}

