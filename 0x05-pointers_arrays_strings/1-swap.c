#include <stdio.h>

/**
 * swap_int - function swaps 2 numbers.
 *
 * @a: is a pointer swap with b
 *
 * @b is a pointer swap with a
 *
 * Retun: void.
 */

void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
