#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog with given name, age, and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_cpy, *owner_cpy;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

name_cpy = malloc(sizeof(char) * (strlen(name) + 1));
if (name_cpy == NULL) {
free(dog);
return (NULL);
}

owner_cpy = malloc(sizeof(char) * (strlen(owner) + 1));
if (owner_cpy == NULL) {
free(name_cpy);
free(dog);
return (NULL);
}

strcpy(name_cpy, name);
strcpy(owner_cpy, owner);

dog->name = name_cpy;
dog->age = age;
dog->owner = owner_cpy;

return (dog);
}
