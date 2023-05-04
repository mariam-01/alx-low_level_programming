#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  convert a string to an integer
 * Return: 0
 */
int main(void)
{
int s;
char c;
srand(time(NULL));
while (s <= 2645)
{
c = rand() % 120;
s += c;
_putchar(c);
}
_putchar(2772 - s);
return (0);
}
