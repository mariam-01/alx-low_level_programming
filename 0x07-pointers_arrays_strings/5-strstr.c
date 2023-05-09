#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strstr -  search a string for any of a set of bytes.
 *@haystack: pointer
 *@needle: pointer
 *
 *
 * Return: a pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
char *hay, *nee;
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
hay = haystack;
nee = needle;
while (*nee != '\0' && *hay == *nee)
{
hay++;
nee++;
}
if (*nee == '\0')
{
return (haystack);
}
haystack++;
}
return (0);
}
