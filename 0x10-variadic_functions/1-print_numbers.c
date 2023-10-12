#include <stdarg.h>

/**
 * print_numbers - Print a list of numbers with a separator
 * @separator: The string to print between numbers
 * @n: The number of integers to print
 * @...: The variable number of integer arguments
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
int i =n;
va_list ap;
if (!n)
{
printf("\n");
return;
}
va_start(ap,n);
while(i--)
printf("%d%s", va_arg(ap, int), i ? (*separator ? *separator : "") : "\n");
va_end(ap);
}
