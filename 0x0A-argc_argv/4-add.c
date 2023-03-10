#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_number - Check if a string represents a positive number
 * @s: The string to check
 * Return: 1 if the string represents a positive number, 0 otherwise
 */
int is_number(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
/**
 * main - Entry point
 *
 * @argc: The number of arguments passed
 * @argv: An array of strings containing the arguments
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (is_number(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
