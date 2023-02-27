#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates a random valid password.
 *
 * Return: Always 0.
 */
int main(void)
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char password[PASSWORD_LENGTH + 1];
int index;

srand(time(NULL)); /* Seed the random number generator */

for (index = 0; index < PASSWORD_LENGTH; index++)
{
password[index] = charset[rand() % (sizeof(charset) - 1)];
}

password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password string */

printf("%s\n", password); /* Print the password */

return (0);
}
