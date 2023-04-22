#include <stdio.h>
#include <stdlib.h>
/**
* main - Hexadecimal
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char B[6] = "abcdef";
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 0; i < 6; i++)
{
putchar(B[i]);
}
putchar('\n');
return (0);
}
