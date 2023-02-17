#include <stdio.h>

/**
 * main - Smile in the mirror
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter = 122; /* 'z' is 122 in ASCII */

while (letter >= 97) /* 'a' is 97 in ASCII */
{
putchar(letter);
letter--;
}
putchar('\n');

return (0);
}
