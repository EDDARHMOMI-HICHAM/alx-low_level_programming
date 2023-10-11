#include "function_pointers.h"

/**
 * print_name - prints a name using a functer
 * @name: name of the person
 * @f: function pointer to a function that oid
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
