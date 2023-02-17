#include <stdio.h>

/**
 * main - alphABET
 *
 * Description: Prints the upercase and lowercase alphabet using puchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letterLower, lettrUpper;
for (letterLower = 'a'; letterLower <= 'z'; letterLower++)
putchar(letterLower);
for (lettrUpper = 'A'; lettrUpper <= 'Z'; lettrUpper++)
putchar(lettrUpper);
putchar('\n');
return (0);
}
