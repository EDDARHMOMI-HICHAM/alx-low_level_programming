#include <stdarg.h>

/**
 * sum_them_all - Sum variable number of integers
 * @n: Number of integers to sum
 * @...: Variable number of arguments
 *
 * Return: Sum of all integers
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int sum = 0;
unsigned int i;

va_start(ap, n);

if (n == 0)
{
return (0);
}

for (i = 0; i < n; i++) {
sum += va_arg(ap, int);
}

va_end(ap);

return (sum);
}
