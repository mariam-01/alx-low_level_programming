#include <stdio.h>
#include <stdlib.h>
/**
* main -  Smile in the mirror
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char A[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 26; i > 0; i--)
{
putchar(A[i]);
}
putchar('\n');
return (0);
}
