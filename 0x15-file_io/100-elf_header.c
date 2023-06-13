#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

#define BUF_SIZE 64

void display_error(const char *message)
{
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void display_elf_header(Elf64_Ehdr *header)
{
    char magic[5];
    memcpy(magic, header->e_ident, 4);
    magic[4] = '\0';

    printf("ELF Header:\n");
    printf("  Magic:   %.3s\n", magic);

    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS])
    {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }

    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA])
    {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }

    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }
}

void read_elf_header(const char *filename)
{
    int fd = open(filename, O_RDONLY);
ssize_t bytes_read;
    Elf64_Ehdr header;
    if (fd == -1)
        display_error(strerror(errno));

     bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read == -1)
    {
        close(fd);
        display_error(strerror(errno));
    }

    if (bytes_read != sizeof(header))
    {
        close(fd);
        display_error("Failed to read ELF header");
    }

    display_elf_header(&header);
    close(fd);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        display_error("Usage: elf_header elf_filename");

    read_elf_header(argv[1]);

    return 0;
}
