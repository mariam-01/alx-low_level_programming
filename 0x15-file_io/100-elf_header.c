#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_osabi_more(Elf64_Ehdr h);
/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @h: Elf64_Ehdr 
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(Elf64_Ehdr h)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
    printf("%2.2x%s", h.e_ident[index], index == EI_NIDENT - 1 ? "\n" : " ");

	}
}


/**
 * print_class - Prints the class of an ELF header.
 * @h: Elf64_Ehdr 
 */
void print_class(Elf64_Ehdr h)
{
	printf(" Class: ");

	switch (h.e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @h: Elf64_Ehdr 
 */
void print_data(Elf64_Ehdr h)
{
	printf(" Data: ");

	switch (h.e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	}
}

/**
 *  * print_version - Prints the version of an ELF header.
 *    * @h: Elf64_Ehdr 
 *    */
void print_version(Elf64_Ehdr h)
{
	 printf(" Version: %d",
			  h.e_ident[EI_VERSION]);

	switch (h.e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	case EV_NONE:
		printf("%s\n", "");
		break;
		break;
	}
}



/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @h: Elf64_Ehdr 
 */
void print_osabi(Elf64_Ehdr h)
{
	printf(" OS/ABI: ");

	switch (h.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
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
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", h.e_ident[EI_OSABI]);
		break;
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @h: Elf64_Ehdr 
 */
void print_abi(Elf64_Ehdr h)
{
	printf(" ABI Version: %d\n",
		h.e_ident[EI_ABIVERSION]);
}


/**
 * print_type - Prints the type of an ELF header.
 * @h: Elf64_Ehdr 
 */
void print_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int i = 0;
	printf(" Type:    ");

	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		 i = 1;

	switch (p[i])
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", p[i]);
	}
}


/**
 * print_entry - Prints the entry point of an ELF header.
 * @h: Elf64_Ehdr 
 */
void print_entry(Elf64_Ehdr h)
{
	int i = 0, len = 0;
    unsigned char *p = (unsigned char *)&h.e_entry;

	printf(" Entry point address:       0x");

	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
            i--;
        printf("%x", p[i--]);
        for (; i >= 0; i--)
            printf("%02x", p[i]);
        printf("\n");
	}

	else 
	{
	    i = 0;
	    len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
	    while (!p[i])
            i++;
        printf("%x", p[i++]);
        for (; i <= len; i++)
            printf("%02x", p[i]);
        printf("\n");
	}
	
}





/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 * the function fails - exit code 98.
 */



int main(int argc, char **argv)
{
	Elf64_Ehdr header;
	int o;
    ssize_t b;
    if (argc != 2)
    {
      dprintf(STDERR_FILENO, "usage: elf-_header elf_filename\n");
    exit(98);  
    }
	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
    b = read(o, &header, sizeof(header));

	if (b < 1 || b != sizeof(header))
	{
		
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	

	if (header.e_ident[0] == 0x7f && header.e_ident[1] == 'E' &&
            header.e_ident[2] == 'L' && header.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
		
	}
    else
    {
        dprintf(STDERR_FILENO, "not ELF file: %s\n", argv[1]);
		exit(98);
    }
	
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_osabi(header);
	print_abi(header);
	print_type(header);
	print_entry(header);

	if (close(o))
        dprintf(STDERR_FILENO, "Error Closing file dexcriptor : %d\n", o);
        exit(98);
	return (EXIT_SUCCESS);
}


