#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a given string is a palindrome
 *
 * @s: Pointer to the string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int i, j;

if (s == NULL) {
return (0);
}

i = 0;
j = strlen(s) - 1;

while (i < j) {
if (s[i] != s[j]) {
return (0);
}

i++;
j--;
}

return (1);
}
