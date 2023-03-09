#include <stdio.h>

/**
 * wildcmp - Compares two strings and returns 1e returns 0
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string, which can contain character *
 *
 * Return: 1 if the strings can be considered identherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
{
return (1);
}

if (*s1 == '\0')
{
return (wildcmp(s1, s2 + 1));
}

return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}

if (*s1 == '\0' || *s2 == '\0')
{
return (*s1 == *s2);
}

if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}

return (0);
}
