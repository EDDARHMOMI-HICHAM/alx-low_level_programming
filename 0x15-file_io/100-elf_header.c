#include "main.h"

#include "main.h"

/**
 * display_elf_header - Display information from the ELF header.
 * @ehdr: Pointer to the ELF header structure.
 */

int i;

void display_elf_header(Elf64_Ehdr *ehdr)
{
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) {
		printf("%02x", ehdr->e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");

	printf("  Class:                             %s\n",
		(ehdr->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" :
		(ehdr->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "Invalid");

	printf("  Data:                              %s\n",
		(ehdr->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" :
		(ehdr->e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big-endian" : "Invalid");

	printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            %s\n", (ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");

	printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);

	printf("  Type:                              %s\n",
		(ehdr->e_type == ET_NONE) ? "NONE (No file type)" :
		(ehdr->e_type == ET_REL) ? "REL (Relocatable file)" :
		(ehdr->e_type == ET_EXEC) ? "EXEC (Executable file)" :
		(ehdr->e_type == ET_DYN) ? "DYN (Shared object file)" :
		(ehdr->e_type == ET_CORE) ? "CORE (Core file)" : "Other");

	printf("  Entry point address:               0x%lx\n", ehdr->e_entry);
}

/**
 * main - Entry point for the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, or 98 on failure.
 */

int fd;
Elf64_Ehdr ehdr;
ssize_t n;

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, ERROR_MSG);
		return (98);
	}

	n = read(fd, &ehdr, sizeof(Elf64_Ehdr));

	if (n < 0 || (size_t)n < sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, ERROR_MSG);
		close(fd);
		return (98);
	}

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
		ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, ERROR_MSG);
		close(fd);
		return (98);
	}

	display_elf_header(&ehdr);
	close(fd);

	return (0);
}

