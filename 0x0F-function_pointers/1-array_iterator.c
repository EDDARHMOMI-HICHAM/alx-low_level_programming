#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to execute on each element
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
