#include <stdio.h>
#include <stdlib.h>
/**
* main - Inventing is a combination of brains and materials
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j;
for (i = 48; i <= 58; i++)
{
for (j = 49; j <= 57; j++)
{
if (j > i)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
