#include "main.h"
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * string_toupper - changes all lowercase to uppercase
 *
 *@s: pointer
 * Return: 0
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 97) && (s[i] <= 122))
{
s[i] = s[i] - 32;
}
}
return (s);
}
