#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen_recursion - a function that that returns the length of a string
 *@s: pointer
 *
 *
 * Return: an integer
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
