#include "main.h"
11;rgb:0000/0000/0000
/**
 * leet - encodes a string to 1337
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
int i, j;
char *s = str;
char leet[] = {'4', '3', '0', '7', '1'};
char letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == letters[j])
{
s[i] = leet[j % 5];
}
}
}

return (s);
}
