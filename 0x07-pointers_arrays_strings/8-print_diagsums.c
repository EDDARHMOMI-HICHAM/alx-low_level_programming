#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix of integers.
 * @a: Pointer to the matrix of integers.
 * @size: Size of the matrix.
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += *(a + i*size + i); /* sum of elements of primary diagonal */
sum2 += *(a + i*size + (size-i-1)); /* sum of elements of secondary diagonal */
}

printf("%d, %d\n", sum1, sum2);
}
