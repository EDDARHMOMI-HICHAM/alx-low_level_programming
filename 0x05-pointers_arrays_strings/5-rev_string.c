#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: the string to reverse.
 */
void rev_string(char *s)
{
int len = strlen(s);
int i;
char tmp;

for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
}
}
