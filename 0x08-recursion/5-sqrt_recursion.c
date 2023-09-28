/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_helper(int n, int i);
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);

return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Recursive function that helps find the square root
 * @n: The number to find the square root of
 * @i: The value to check if it's a possible square root
 *
 * Return: The square root of n if found, or -1 if not found
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);

if (i * i == n)
return (i);

return (_sqrt_helper(n, i + 1));
}
