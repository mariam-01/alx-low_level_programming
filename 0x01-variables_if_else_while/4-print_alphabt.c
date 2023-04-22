#include <stdio.h>
#include <stdlib.h>
/**
* main - I was having that alphabrt soup
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char A[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 26; i++)
{
if (A[i] != 'e' && A[i] != 'q')
{
putchar(A[i]);
}
}
putchar('\n');
return (0);
}
