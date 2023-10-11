#ifndef DOG_H
#define DOG_H


/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a struct representing a dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
