#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i, j;
char A[26] = "abcdefghijklmnopqrstuvwxyz";
for (j = 0; j < 10; j++)
{
for (i = 0; i < 26; i++)
{
_putchar(A[i]);
}
_putchar('\n');
}
}
