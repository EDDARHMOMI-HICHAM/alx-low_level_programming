#include <stdio.h>

/**
 * main - Prints the name of the current file using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
char *file = __FILE__;
int i;

for (i = 0; file[i] != '\0'; i++)
putchar(file[i]);

putchar('\n');
return (0);
}
