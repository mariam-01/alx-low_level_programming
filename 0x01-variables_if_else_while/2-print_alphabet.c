#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char A[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
putchar(A[i]);
}
putchar('\n');
return (0);
}
