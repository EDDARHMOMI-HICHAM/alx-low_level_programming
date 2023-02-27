#include <unistd.h>

/**
 * _puts - prints a string to stdout, followed by a new line.
 * @str: the string to print.
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
write(STDOUT_FILENO, &str[i], 1);
i++;
}
write(STDOUT_FILENO, "\n", 1);
}
