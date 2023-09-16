#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
char alow;
int al10times;

for (al10times = 0; al10times <= 9; al10times++)
{

for (alow = 'a';  alow <= 'z'; alow++)
{
_putchar(alow);


}
_putchar('\n');

}
}
