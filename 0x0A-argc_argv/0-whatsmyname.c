#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
(void)argc; /* Suppress unused parameter warning */
printf("%s\n", argv[0]);
return (0);
}
