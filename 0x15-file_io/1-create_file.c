#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile -  creates a file.
 * @filename: The name of the file 
 * @text_content:  string to write to the file
 * Return: 1 on success, or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
int f;
int i = 0, w = 0;

if (!filename)
{
return (-1);
}
f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

if (f == -1)
{
return (0);
}
if (!text_content)
{
while (text_content[i] != '\0')
{
i++;
}
w = write(f, text_content, i);
if (w == -1 || w != i)
{
close(f);
return (-1);
}

}

close(f);
return (0);
}
