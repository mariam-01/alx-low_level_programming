#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 *create_file -  creates a file.
 * @filename: The name of the file
 * @text_content:  string to write to the file
 * Return: 1 on success, or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
int f;
int i = 0, w = 0;
char buffer[1024];
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
while (text_content[len] != '\0')
{
i++;
}
w = = write(fd, text_content, len);
if (w == -1 || w != i)
{
close(fd);
return (-1);
}

}

close(f);
return (0);
}


