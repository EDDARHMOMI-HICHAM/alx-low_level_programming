#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i, j;

for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
_putchar(argv[i][j]);
}
_putchar('\n');
}

return (0);
}
