#include "main.h"
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcmp - compares two strings
 *@s2: pointer
 *@s1: pointer
 * Return: returns a value
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
