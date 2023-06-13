#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file -  creates a file.
 * @filename: The name of the file
 * @text_content:  string to write to the file
 * Return: 1 on success, or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
int f;
int l, w = 0;
l = strlen(text_content);
if (!filename)
{
return (-1);
}
f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
w = write(f, text_content, l);

if (f == -1 || w == -1)
{
return (-1);
}

close(f);
return (w == l ? 1 : -1);
}

