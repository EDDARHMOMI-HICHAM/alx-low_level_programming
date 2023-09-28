/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int lo);

int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n == 2 || n == 3)
return (1);
if (n % 2 == 0 || n % 3 == 0)
return (0);
return (is_prime_helper(n, 5));
}

/**
 * is_prime_helper - checks if n is divisible by
 * @n: the number to check
 * @lo: the lowest odd integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int lo)
{
if (lo * lo > n)
return (1);
if (n % lo == 0 || n % (lo + 2) == 0)
return (0);
return (is_prime_helper(n, lo + 6));
}
