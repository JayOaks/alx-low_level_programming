#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a structure of type dog
 * @d: is the pointer to the structure
 * @name: is the pointer the name of the dog
 * @age: is the pointer to the age of the dog
 * @owner is the pointer to the name of the dog's owner
 * 
 * Return: void
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
