#include <stdio.h>

/**
 * main - finds and prints the sum of the...
 *
 * Return: 0 on success
 */
int main(void)
{
int i;
long int fib[50] = {1, 2};
long int sum = 2;

for (i = 2; fib[i - 1] + fib[i - 2] <= 4000000; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
if (fib[i] % 2 == 0)
{
sum += fib[i];
}
}

printf("%ld\n", sum);

return (0);
}
