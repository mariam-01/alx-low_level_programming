#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: The name of the file
 * @text_content:  string to write to the file
 * Return: 1 on success, or -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
int f;
ssize_t l = 0, w = 0;

if (text_content != NULL)
{
l = strlen(text_content);
}
if (!filename)
{
return (-1);
}
f = open(filename, O_WRONLY | O_APPEND);

if (f == -1)
{
return (-1);
}
if (l)
{
w = write(f, text_content, l);
}

close(f);
return (w == l ? 1 : -1);
}





