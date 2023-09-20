#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: pointer to the destination array
 * @src: pointer to the source array
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len, i;

dest_len = 0;
while (dest[dest_len] != '\0')
dest_len++;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

dest[dest_len + i] = '\0';

return (dest);
}
