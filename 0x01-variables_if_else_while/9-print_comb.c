#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = 0;

while (num < 10)
{
int next_num = num + 1;

while (next_num < 10)
{
putchar((num % 10) + '0');
putchar(',');
putchar(' ');
putchar((next_num % 10) + '0');

if (num != 8 || next_num != 9)
{
putchar(',');
putchar(' ');
}

next_num++;
}

num++;
}

putchar('\n');

return (0);
}
