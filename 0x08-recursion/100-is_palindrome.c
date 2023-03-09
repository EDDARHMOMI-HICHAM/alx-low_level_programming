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
if (s == NULL) {
return (0);
}

int len = strlen(s);

if (len <= 1) {
return (1);
}

return (strncmp(s, s + len - 1, 1) == 0 && is_palindrome(s + 1));
}
