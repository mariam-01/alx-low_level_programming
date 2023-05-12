#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all arguments it receives
 *@argc: number
 *@argv: pointer
 *
 * Return: returns 0
 */


int main(int argc, char *argv[])
{
int m;
if (argc != 3)
{
printf("Error \n");
}

else
{
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);
}

return (0);
}
