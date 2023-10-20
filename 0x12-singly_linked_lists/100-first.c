#include <stdio.h>

/**
 * before_main - Function executed before main.
 *
 * This function prints a message before the main function is executed.
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI%s",
			" bore my house upon my back!\n");
}
