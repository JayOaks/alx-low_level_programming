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

    if (ndog == NULL) {
        return (NULL);
    }

    ndog->name = strdup(name);
    ndog->owner = strdup(owner);
    
    if (ndog->name == NULL || ndog->owner == NULL) {
        free(ndog->name);
        free(ndog->owner);
        free(ndog);
        return (NULL);
    }

    ndog->age = age;

    return (ndog);
}
