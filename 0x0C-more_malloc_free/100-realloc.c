#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate a memory block
 *
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size in bytes of the allocated space for ptr
 * @new_size: New size in bytes of the new memory block
 *
 * Return: Pointer to the new memory block
 * NULL if memory allocation fails or new_size is 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *char_ptr, *old_ptr;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
return (malloc(new_size));
if (new_size == 0)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
char_ptr = new_ptr;
old_ptr = ptr;
for (i = 0; i < old_size && i < new_size; i++)
char_ptr[i] = old_ptr[i];
free(ptr);
return (new_ptr);
}
