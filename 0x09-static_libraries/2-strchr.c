#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strchr - locates a character in a string
 *@s: pointer
 *@c: char
 *
 *
 * Return: the result pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
