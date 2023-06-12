#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int *f;
ssize_t r, w;
char buffer[1024];
if (!filename || !letters)
{
return (0);
}
f = fopen(filename, O_RDONLY);

if (f == -1)
{
return (0);
}


r = read(fd, buffer, sizeof(buffer));
if (r == -1)
{
close(f);
return (0);
}

w = write(STDOUT_FILENO, buffer, r);
if (w == -1 || (size_t)w != r)
{
close(f);
return (0);
}
close(f);

return (w);




}

