#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a record of a new dog
 * @name: is the name of the new dog
 * @age: is the age of the new dog
 * @owner: is the name of the new dog's owner
 *
 * Return: a pointer to the new dog's info if successful,
 * or NULL if it failed**/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog = malloc(sizeof(dog_t));

if (ndog == NULL)
return (NULL);

ndog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (ndog->name == NULL)
{
free(ndog);
return (NULL);
}

ndog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (ndog->owner == NULL)
{
free(ndog->name);
free(ndog);
return (NULL);
}

strcpy(ndog->name, name);
strcpy(ndog->owner, owner);

ndog->age = age;

return (ndog);
}
