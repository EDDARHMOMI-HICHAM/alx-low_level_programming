#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
printf("%02d %02d", num1, num2);
if (num1 != 9 || num2 != 9)
{
printf(", ");
}
}
}
printf("\n");
return (0);
}
