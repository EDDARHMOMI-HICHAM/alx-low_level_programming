#include "main.h"

/**
 * print_number - prints an integer using only _putchar function
 * @n: the integer to be printed
 */
void print_number(int n)
{
int digits = 1;
int copy = n;

if (n < 0)
{
_putchar('-');
copy = -copy;
}

while (copy / 10 > 0)
{
digits *= 10;
copy /= 10;
}

while (digits >= 1)
{
_putchar((n / digits) % 10 + '0');
digits /= 10;
}
}
