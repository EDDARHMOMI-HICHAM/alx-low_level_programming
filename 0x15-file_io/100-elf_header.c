#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

void print_error_exit(char *msg) {
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

void print_elf_header(char *filename) {
	int fd = open(filename, O_RDONLY);
	  Elf64_Ehdr header;
        ssize_t read_size;
	int i;

	if (fd == -1)
		print_error_exit("Error opening file");

	
	read_size = read(fd, &header, sizeof(header));

if (read_size == -1 || (size_t)read_size < sizeof(header))
    print_error_exit("Error reading ELF header");

	close(fd);

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
		print_error_exit("Not an ELF file");

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", header.e_ident[i], (i < EI_NIDENT - 1) ? ' ' : '\n');
	printf("  Class:                             %s\n", (header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown data format");
	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", (header.e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other OS/ABI");
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", (header.e_type == ET_EXEC) ? "EXEC (Executable file)" : ((header.e_type == ET_DYN) ? "DYN (Shared object file)" : "Other"));
	printf("  Entry point address:               0x%lx\n", (unsigned long)header.e_entry);
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 1;
	}

	print_elf_header(argv[1]);
	
	return 0;
}
