/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 * separated by a newline character, or NULL if ac == 0, av == NULL, or if
 * memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, total_len = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
total_len += len + 1;
len = 0;
}
str = malloc(sizeof(char) * total_len);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
*str++ = av[i][j];
*str++ = '\n';
}
*str = '\0';
return (str - total_len);
}
