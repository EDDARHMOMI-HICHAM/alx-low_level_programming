#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from s2
 * Return: pointer to newly allocated space in memory 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i, j;
char *ptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (len1 = 0; s1[len1]; len1++)
;
for (len2 = 0; s2[len2]; len2++)
;

if (n >= len2)
n = len2;

ptr = malloc(sizeof(char) * (len1 + n + 1));
if (ptr == NULL)
return (NULL);

for (i = 0; i < len1; i++)
ptr[i] = s1[i];

for (j = 0; j < n; j++)
ptr[i + j] = s2[j];

ptr[i + j] = '\0';

return (ptr);
}
