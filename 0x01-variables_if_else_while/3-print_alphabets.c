#include <stdio.h>
#include <stdlib.h>
/**
* main - alphABET
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char A[26] = "abcdefghijklmnopqrstuvwxyz";
char B[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; i < 26; i++)
{
putchar(A[i]);
}
for (i = 0; i < 26; i++)
{
putchar(B[i]);
}
putchar('\n');
return (0);
}
