#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers.
 *
 * This function takes two integer pointers, 'a' and 'b', and swaps the values
 * of the integers they point to.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
