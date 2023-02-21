#include <stdio.h>

/**
 * main - finds and prints the first 98 ...
 *
 * Return: 0 on success
 */

int main(void)
{
int current = 2;
int previous = 1;

printf("%d, %d, ", previous, current);

for (int i = 3; i <= 98; i++)
{
int next = current + previous;
printf("%d", next);
if (i < 98)
{
printf(", ");
}
previous = current;
current = next;
}

printf("\n");
return (0);
}
