/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to be searched
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] != haystack[i + j])
break;
}
if (needle[j] == '\0')
return (haystack + i);
}

return (NULL);
}
