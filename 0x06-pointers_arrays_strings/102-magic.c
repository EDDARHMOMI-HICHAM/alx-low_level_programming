#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a[5] = {1, 2, 4, 8, 16};
int *p;

p = &a[2];
/* return here */
printf("a[2] = %d\n", *(p + 1));
return (0);
}
