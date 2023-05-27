#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number
 * @argv: pointer
 *
 * Return: 0, 1, 2
 */

int main(int argc, char *argv[])
{
unsigned char *start = (unsigned char *)&main;
unsigned char *end = start + numBytes;
int numBytes = atoi(argv[1]);

if (argc != 2)
{
printf("Error\n");
return (1);
}

if (numBytes < 0)
{
printf("Error\n");
return (2);
}

for (unsigned char *ptr = start; ptr < end; ptr++)
{
printf("%02x", *ptr);
}

printf("\n");
\return (0);
}


