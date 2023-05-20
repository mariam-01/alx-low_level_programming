#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


/**
 * multiply - multiply 2 numbers
 *@n: integer
 *@m: integer
 * Return: integer
 */



int multiply(int n, int m)
{
return (n * m);
}

/**
 * validate_input - reallocates a memory block using malloc and free
 *@arg: pointer
 * Return: return 1 ,If it fails return 0
 */


int validate_input(char *arg) {
    while (*arg) {
        if (!isdigit(*arg)) {
            return (0);
        }
        arg++;
    }
    return (1);
}

/**
 * main - program that multiplies two positive numbers.
 *@argc: integer
 *@argv: pointer
 * Return: pointer ,If it fails return NULL
 */


int main(int argc, char *argv[])
{
char *arg1, *arg2;
int num1, num2, result;
    if (argc != 3) {
        printf("Error\n");
        return (98);
    }

arg1 = argv[1];
arg2 = argv[2];

    if (!validate_input(arg1) || !validate_input(arg2)) {
        printf("Error\n");
        return (98);
    }

num1 = atoi(arg1);
num2 = atoi(arg2);

result = multiply(num1, num2);

    printf("%d\n", result);

    return (0);
}

