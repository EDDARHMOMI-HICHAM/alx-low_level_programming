#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM_LEN 1024

/**
 * Multiplies two positive numbers.
 *
 * @param num1 The first number.
 * @param num2 The second number.
 * @return The product of num1 and num2.
 */
int mul(int num1, int num2) {
if (num1 < 0 || num2 < 0) {
fprintf(stderr, "Error: Arguments must be positive numbers.\n");
exit(98);
}
return num1 * num2;
}
int main(int argc, char *argv[]) {
int num1, num2, product;
// Check for the correct number of arguments.
if (argc != 3) {
fprintf(stderr, "Error: Usage: mul num1 num2\n");
exit(98);
}
// Convert the arguments to integers.
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
// Multiply the two numbers.
product = mul(num1, num2);
// Print the result.
printf("%d\n", product);
return 0;
}
