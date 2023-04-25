#include <stdio.h>
#include <stdlib.h>
/**
* print_alphabet - print alphabet
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char A[26] = "abcdefghijklmnopqrstuvwxyz"
for (int i = 0; i < 26; i++)
{
_putchar(A[i]);
}
_putchar('\n');
}
