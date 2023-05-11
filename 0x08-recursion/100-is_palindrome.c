#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _palindrome - check for palandrome
 *@s: pointer
 *@debut: number
 *@fin: number
 * Return: number
 */
int _palindrome(char *s, int debut, int fin)
{
if (debut >= fin)
{
return (1);
}
else if (s[debut] != s[fin])
{
return (0);
}
else
{
return (_palindrome(s, debut + 1, fin - 1));
}
}

/**
 * is_palindrome - returns 1 if n is a palindrome, otherwise return 0.
 *@s: pointer
 * Return: returns 1 if n is a palindrome, otherwise return 0
 */

int is_palindrome(char *s)
{
int l = strlen(s);
return (_palindrome(s, 0, l - 1));
}

