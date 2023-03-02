#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: pointer to result, or 0 if result can't be stored in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, i = 0, j = 0, k = 0, carry = 0, sum = 0;

/* find length of n1 and n2 */
while (n1[len1])
len1++;
while (n2[len2])
len2++;

/* check if result can be stored in buffer */
if (len1 + len2 >= size_r)
return (0);

/* add n1 and n2 starting from least significant digit */
for (i = len1 - 1, j = len2 - 1, k = 0; k < size_r - 1 && (i >= 0 || j >= 0); i--, j--, k++)
{
sum = carry;

if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

if (sum > 9)
{
carry = 1;
sum -= 10;
}
else
carry = 0;

r[k] = sum + '0';
}
if (carry)
{
if (k >= size_r - 1)
return (0);
r[k++] = '1';
}

r[k] = '\0';

/* reverse result */
for (i = 0, j = k - 1; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}

return (r);
}
