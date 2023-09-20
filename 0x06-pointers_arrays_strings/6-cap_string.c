/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
char *ptr = str;
int capitalize_next = 1;

while (*ptr)
{
if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
{
*ptr = *ptr - 'a' + 'A';
}

capitalize_next = 0;

switch (*ptr)
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '\"':
case '(':
case ')':
case '{':
case '}':
capitalize_next = 1;
break;
}

ptr++;
}

return (str);
}
