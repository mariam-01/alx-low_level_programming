#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile -  reads a text file and prints it to the standard output.
 * @filename: The name of the file
 * @letters: The number of letters to read and print.
 * Return: number of letters read and printed, or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t r;
char buffer[1024];
if (!filename || !letters)
{
return (0);
}
f = open(filename, O_RDONLY);

if (f == -1)
{
return (0);
}
r = read(f, buffer, sizeof(buffer));

r = write(STDOUT_FILENO, buffer, r);

close(f);

return (r);
}
