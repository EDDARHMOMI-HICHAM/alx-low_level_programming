#include "main.h"
#include <string.h>
/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int i, j;
if (len1 + 1 > size_r || len2 + 1 > size_r)
return (0);
r[size_r - 1] = '\0';
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
int digit1 = (i >= 0) ? n1[i] - '0' : 0;
int digit2 = (j >= 0) ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
if (sum > 9)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
r[size_r - 2 - (i > j ? i : j)] = sum + '0';
}
if (carry == 1)
{
if (size_r <= len1 + 1 || size_r <= len2 + 1)
return (0);
r[0] = '1';
return (r);
}
return (&r[size_r - 1 - (i > j ? i : j)]);
}
