#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees the dogs by freeing the meory allocated to their information
 * @d: is the pointer to the dog/dog's information to freed
 *
 * Return: void
**/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
