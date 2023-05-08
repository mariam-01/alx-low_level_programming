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

while (*s != '\0')
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }
}
