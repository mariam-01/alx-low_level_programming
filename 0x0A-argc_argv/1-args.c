#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the number of arguments passed into it.
 *@argc: number
 *@argv: pointer
 *
 * Return: returns 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int n = argc - 1;
printf("%d\n", n);

return (0);
}
