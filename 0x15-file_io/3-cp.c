#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or the corresponding exit code on failure.
 */

int main(int argc, char *argv[])
{
int f_from, f_to, r, w;
char buffer[BUFFER_SIZE];
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	exit(97);
f_from = open(argv[1], O_RDONLY);
if (f_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
if (f_to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
while ((r = read(f_from, buffer, BUFFER_SIZE)) > 0)
{
w = write(f_to, buffer, r);
if (w == -1 || w != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (r == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
if (close(f_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
	exit(100);
if (close(f_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
exit(100);
}
return (0);
}
