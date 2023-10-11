#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 1 or 2 on failure
 */
int main(int argc, char **argv)
{
int num_bytes, i;
char *main_addr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

main_addr = (char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", *(main_addr + i) & 0xff);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");

return (0);
}
