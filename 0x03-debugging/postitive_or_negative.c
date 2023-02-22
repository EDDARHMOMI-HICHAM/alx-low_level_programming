#include<stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * postitive_or_negative - positive of n number
 */
void positive_or_negative(int i)
{
int n;
srand(time(0));
n = i;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
}
